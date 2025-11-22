#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2113/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        int res = 0;
        if (x < y) {
            int val = k - a;
            if (val >= 0) {
                res += val / x + 1;
                k -= (val / x + 1) * x;
            }
            
            val = k - b;
            if (val >= 0) {
                res += val / y + 1;
            }
        } else {
            int val = k - b;
            if (val >= 0) {
                res += val / y + 1;
                k -= (val / y + 1) * y;
            }
            
            val = k - a;
            if (val >= 0) {
                res += val / x + 1;
            }
        }
        cout << res << endl;
    }
}