#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1795/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        bool valid = false;
        int left = 1;
        int right = 1e9;
        while (n--) {
            int l, r;
            cin >> l >> r;
            if (l <= k && k <= r) {
                valid = true;
                left = max(left, l);
                right = min(right, r);
            }
        }
        cout << (valid && abs(left - right) == 0 ? "YES" : "NO") << endl;
    }
}