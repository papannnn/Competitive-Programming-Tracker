#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2102/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p != 0) {
            cout << "YES" << endl;
            continue;
        }

        if (n / p * q == m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}