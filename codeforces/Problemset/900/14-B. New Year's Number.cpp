#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1475/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 2020) {
            cout << "NO" << endl;
            continue;
        }

        cout << (n % 2020 <= n / 2020 ? "YES" : "NO") << endl;
    }
}