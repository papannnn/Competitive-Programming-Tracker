#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1915/D
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        
        deque<string> res;
        for (int i = s.length() - 1; i >= 0; ) {
            char c = s[i];
            if (c == 'a' || c == 'e') {
                char c1 = s[i - 1];
                char c2 = s[i];
                string temp = "";
                temp += c1;
                temp += c2;
                res.push_front(temp);
                i -= 2;
            } else {
                char c1 = s[i - 2];
                char c2 = s[i - 1];
                char c3 = s[i];
                string temp = "";
                temp += c1;
                temp += c2;
                temp += c3;
                res.push_front(temp);
                i -= 3;
            }
        }

        cout << res[0];
        for (int i = 1; i < res.size(); i++) {
            cout << "." << res[i];
        }
        cout << endl;
    }
}