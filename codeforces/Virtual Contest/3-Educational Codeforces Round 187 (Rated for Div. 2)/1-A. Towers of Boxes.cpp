#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2203/problem/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int maxBoxStack = d / m + 1;
        int res = ceil(static_cast<double>(n) / maxBoxStack);
        cout << res << endl;
    }
}