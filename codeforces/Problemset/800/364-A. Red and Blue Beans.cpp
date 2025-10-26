#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1519/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        int diff = ceil((double) max(l, r) / min(l, r));
        cout << (diff - 1 <= k ? "YES" : "NO") << endl;
    }
}