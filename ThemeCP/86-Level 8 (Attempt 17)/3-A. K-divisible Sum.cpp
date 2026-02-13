#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1476/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << 1 << endl;
            continue;
        }

        if (n == k) {
            cout << 1 << endl;
            continue;
        }

        if (n > k && n % k == 0) {
            cout << 1 << endl;
            continue;
        }

        if (n > k) {
            cout << 2 << endl;
            continue;
        }

        long long res = ceil(static_cast<double>(k) / n);
        cout << res << endl;
    }
}
