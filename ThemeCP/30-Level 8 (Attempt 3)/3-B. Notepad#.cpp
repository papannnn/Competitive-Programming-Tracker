#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1766/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        unordered_map<string, int> flag;

        bool valid = false;
        int len = s.length();
        for (int i = 0 ; i < len - 1; i++) {
            if (flag.find(s.substr(i, 2)) != flag.end()) {
                if (flag[s.substr(i, 2)] < i - 1) {
                    valid = true;
                    break;
                }
            } else {
                flag[s.substr(i, 2)] = i;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}