#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2004/B
// O(t * (min(l, L) + (max(r, R))))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int L, R;
        cin >> L >> R;

        int cnt = 0;
        // cout << "l: " << l << endl;
        // cout << "r: " << r << endl;
        // cout << "L: " << L << endl;
        // cout << "R: " << R << endl;
        for (int i = min(l, L); i <= min(r, R); i++) {
            if (i >= l && i <= r && i >= L && i <= R) {
                // cout << i << endl;
                cnt++;
            }
        }

        if (l == L) {
            cnt--;
        }

        if (r == R) {
            cnt--;
        }
        cout << cnt + 1 << endl;
    }
}