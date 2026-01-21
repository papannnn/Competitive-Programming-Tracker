#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2157/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int four = 0;
        int eight = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '4') {
                four++;
            } else {
                eight++;
            }
        }

        x = abs(x);
        y = abs(y);
        // cout << (2 * eight + four) << endl;

        if ((2 * eight + four) < x + y) {
            cout << "NO" << endl;
            continue;
        }

        if (eight + four < max(x, y)) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}