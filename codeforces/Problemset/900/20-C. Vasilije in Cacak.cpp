#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1878/C
// O(t * n  )
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long sum = k * (k + 1) / 2;
        if (sum > x) {
            cout << "NO" << endl;
            continue;
        }

        if (sum == x) {
            cout << "YES" << endl;
            continue;
        }

        bool valid = false;
        for (int i = k + 1; i <= n; i++) {
            sum += i;
            sum -= i - k;
            valid |= sum >= x;
            if (valid) {
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}