#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1935/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        string rev = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            rev += s[i];
        }

        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == rev[i]) {
                continue;
            }

            if (s[i] < rev[i]) {
                res = -1;
            } else {
                res = 1;
            }
            break;
        }

        if (res > 0) {
            cout << rev + s << endl;
        } else {
            cout << s << endl;
        }
    }
}