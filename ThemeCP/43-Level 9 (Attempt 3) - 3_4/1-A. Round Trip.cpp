#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2161/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int R0, X, D, n;
        cin >> R0 >> X >> D >> n;
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                res++;
                R0 -= D;
            } else {
                if (R0 < X) {
                    res++;
                    R0 -= D;
                }
            }
        }
        cout << res << endl;
    }
}