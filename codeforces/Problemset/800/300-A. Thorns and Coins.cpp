#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1932/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s; 
        cin >> s;
        int i = 0;
        int res = 0;
        int len = s.length();
        for ( ; i < len - 2; ) {
            if (s[i + 1] == '.') {
                i++;
                continue;
            }

            if (s[i + 1] == '@') {
                i++;
                res++;
                continue;
            }

            if (s[i + 1] == '*') {
                if (s[i + 2] == '*') {
                    break;
                }

                if (s[i + 2] == '@') {
                    res++;
                }
                i += 2;
            }
        }
        
        if (i + 1 <= len - 1) {
            res += s[i + 1] == '@';
        }

        if (i + 2 <= len - 1) {
            res += s[i + 2] == '@';
        }
        
        
        cout << res << endl;
    }
}