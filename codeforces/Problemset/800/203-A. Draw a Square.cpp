#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2074/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << (l == r && l == d && l == u ? "Yes" : "No") << endl;
    }
}