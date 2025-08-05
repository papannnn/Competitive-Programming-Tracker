#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1385/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 0, b = 0, c = 0;
        bool anomaly = false;
        if (x == y) {
            a = x;
        }

        if (x == z) {
            b = x;
        }

        if (y == z) {
            c = y;
        }

        if (a != 0 && a < z) {
            anomaly = true;
        }

        if (b != 0 && b < y) {
            anomaly = true;
        }

        if (c != 0 && c < x) {
            anomaly = true;
        }

        if (x != y && x != z && y != z) {
            anomaly = true;
        }

        if (a != 0 && b == 0 && c == 0) {
            b = z;
        }

        if (b != 0 && a == 0 && c == 0) {
            a = y;
        }

        if (c != 0 && b == 0 && a == 0) {
            a = x;
        }

        cout << (anomaly ? "NO" : "YES") << endl;
        if (!anomaly) {
            cout << (a != 0 ? a : 1) << " " << (b != 0 ? b : 1) << " " << (c != 0 ? c : 1) << endl;
        }
    }
}