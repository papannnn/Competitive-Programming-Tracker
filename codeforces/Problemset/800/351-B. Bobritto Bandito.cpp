#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2094/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int resL = min(m, abs(l));
        resL *= -1;
        int resR = m - -resL;
        cout << resL << " " << resR << endl;
    }
}