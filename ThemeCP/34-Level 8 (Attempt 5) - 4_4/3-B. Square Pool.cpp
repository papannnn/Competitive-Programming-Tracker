#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2120/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = 0;
        for (int i = 0 ; i < n; i++) {
            int xVelocity, yVelocity, x, y;
            cin >> xVelocity >> yVelocity >> x >> y;

            if (xVelocity == 1) {
                int diff = k - x;
                x = k;
                y = yVelocity * diff + y;
            } else {
                int diff = x;
                x = 0;
                y = yVelocity * diff + y;
            }

            if (y == 0 || y == k) {
                res++;
            }
        }
        cout << res << endl;
    }
}