#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2119/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a > b && (a ^ 1) != b) {
            cout << -1 << endl;
            continue;
        }

        if (a > b && (a ^ 1) == b) {
            cout << y << endl;
            continue;
        }

        long long res = 0;
        while (a != b) {
            if (y < x && (a ^ 1) > a) {
                res += y;
            } else {
                res += x;
            }
            a++;
        }
        cout << res << endl;
    }
}