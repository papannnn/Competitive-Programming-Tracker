#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1721/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;

        bool invalidLeft = sx + d >= n || sy - d <= 1;
        bool invalidRight = sx - d <= 1 || sy + d >= m;

        if (invalidLeft && invalidRight) {
            cout << -1 << endl;
            continue;
        }

        cout << n - 1 + m - 1 << endl;
    }
}