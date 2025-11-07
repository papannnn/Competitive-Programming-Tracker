#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1941/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        int res = 0;
        int len = s.length();
        for (int i = 0 ; i < len - 2; i++) {
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
                res++;
            }

            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
                if (i + 4 < len && s[i + 3] == 'i' && s[i + 4] == 'e') {
                    res--;
                }
                res++;
            }
        }
        cout << res << endl;
    }
}