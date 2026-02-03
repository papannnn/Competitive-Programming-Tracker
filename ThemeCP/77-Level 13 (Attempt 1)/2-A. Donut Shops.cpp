#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1373/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;

        int res1 = 0;
        int res2 = 0;

        double donutB = c / b;
        if (a <= donutB) {
            if (b == 1) {
                res1 = -1;
            } else {
                res1 = 1;
            }
        } else {
            if (a < c) {
                res1 = 1;
            } else {
                res1 = -1;
            }
        }

        if (donutB < a) {
            res2 = b;
        } else {
            res2 = -1;
            for (int i = 1; i <= 100; i++) {
                if (i * c < i * b * a) {
                    res2 = i * b;
                    break;
                }
            }
        }
        cout << res1 << " " << res2 << endl;
    }
}