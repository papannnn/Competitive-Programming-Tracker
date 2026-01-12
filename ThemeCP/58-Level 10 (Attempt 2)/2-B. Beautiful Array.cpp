#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1715/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long carry = min((k * b + (k - 1)), s);
        if ((n - 1) * (k - 1) + carry < s) {
            cout << -1 << endl;
            continue;
        }

        if (carry > s) {
            cout << -1 << endl;
            continue;
        }

        if (carry / k != b) {
            cout << -1 << endl;
            continue;
        }

        // if (n == 1 && s / k != b) {
        //     cout << -1 << endl;
        //     continue;
        // }


        cout << carry << " ";
        s -= carry;
        for (int i = 0; i < n - 1; i++) {
            long long val = min(s, k - 1);
            cout << val << " ";
            s -= val;
        }
        cout << endl;
    }
}