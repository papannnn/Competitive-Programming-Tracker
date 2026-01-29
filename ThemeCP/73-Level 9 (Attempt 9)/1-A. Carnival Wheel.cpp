#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2180/problem/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        if (b == 1) {
            cout << l - 1 << endl;
            continue;
        }

        // bool odd = a % 2 || b % 2;
        // bool even = a % 2 == 0 || b % 2 == 0;

        // if (odd && even) {
        //     cout << l - 1 << endl;
        //     continue;
        // }

        // if (b % l == 0) {
        //     cout << a << endl;
        //     continue;
        // }

        int curr = a;
        int res = a;
        for (int i = 0 ; i < 10000; i++) {
            curr += b;
            curr = curr % l;
            res = max(res, curr);
        }

        cout << res << endl;
    }
}