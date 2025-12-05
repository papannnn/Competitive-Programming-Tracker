#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2084/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        cout << n << " " << 1 << " ";
        for (int i = 2; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
}