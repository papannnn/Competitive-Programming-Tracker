#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2136/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max1 = max(a, b);
        int min1 = min(a, b);
        if (max1 - (min1 * 2) >= 3) {
            cout << "NO" << endl;
            continue;
        }

        c -= a;
        d -= b;
        int max2 = max(c, d);
        int min2 = min(c, d);
        if (max2 - (min2 * 2) >= 3) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}