#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2009/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int res = max(ceil((double) n / k) * 2 - 1, ceil((double) m / k) * 2);
        cout << res << endl;
    }
}