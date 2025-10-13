#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1519/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int x = 1;
        int y = 1;
        bool res = false;
        res |= (n - 1) + (m - 1) * n == k;
        res |= (m - 1) + (n - 1) * m == k;
        cout << (res ? "YES" : "NO") << endl;
    }
}