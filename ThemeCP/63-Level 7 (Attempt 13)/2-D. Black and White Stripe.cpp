#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1690/D
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _, k;
        cin >> _ >> k;
        string s;
        cin >> s;

        int b = 0;
        int w = 0;
        for (int i = 0 ; i < k; i++) {
            if (s[i] == 'B') {
                b++;
            } else {
                w++;
            }
        }
        int res = w;
        for (int i = k; i < s.length(); i++) {
            if (s[i] == 'B') {
                b++;
            } else {
                w++;
            }

            if (s[i - k] == 'B') {
                b--;
            } else {
                w--;
            }
            res = min(w, res);
        }
        cout << res << endl;
    }
}