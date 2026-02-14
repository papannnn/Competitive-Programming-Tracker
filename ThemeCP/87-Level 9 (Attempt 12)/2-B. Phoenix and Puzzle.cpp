#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1515/B
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2) {
            cout << "NO" << endl;
            continue;
        }

        long val = sqrt(n);
        if (val * val == n) {
            cout << "YES" << endl;
            continue;
        }

        long long x = 2;
        long long y = 1;
        bool valid = false;
        while (x * (y * y) <= n) {
            if (n == x * (y * y)) {
                valid = true;
            }
            y++;
        }

        x = 4;
        y = 1;
        while (x * (y * y) <= n) {
            if (n == x * (y * y)) {
                valid = true;
            }
            x *= 4;
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}