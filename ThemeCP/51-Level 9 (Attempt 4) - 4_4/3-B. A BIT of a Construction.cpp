#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1957/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (n == 1) {
            cout << k << endl;
            continue;
        }

        int res = 0;
        int x = 1;
        while ((res | x) < k) {
            res |= x;
            x = x << 1;
        }
        cout << res << " " << (k - res) << " ";
        for (int i = 0; i < n - 2; i++) {
            cout << 0 << " ";
        }
        cout << endl;
    }
}