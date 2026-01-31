#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1366/problem/B
// O(t * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x, m;
        cin >> n >> x >> m;
        int l = x;
        int r = x;
        for (int i = 0; i < m; i++) {
            int left, right;
            cin >> left >> right;
            if (l >= left && l <= right) {
                l = min(l, left);
            }

            if (r >= left && r <= right) {
                r = max(r, right);
            }
        }
        cout << r - l + 1 << endl;
    }
}