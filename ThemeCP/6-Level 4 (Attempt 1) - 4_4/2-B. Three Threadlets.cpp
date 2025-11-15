#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1881/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int minVal = min(a, min(b, c));

        int res = 0;
        int valid = true;
        res += (a - minVal) / minVal;
        valid &= (a - minVal) % minVal == 0;
        res += (b - minVal) / minVal;
        valid &= (b - minVal) % minVal == 0;
        res += (c - minVal) / minVal;
        valid &= (c - minVal) % minVal == 0;

        if (!valid) {
            cout << "NO" << endl;
        } else {
            if (res <= 3) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        // cout << res << endl;
    }
}