#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2063/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if (l == 1 && r == 1) {
            cout << 1 << endl;
            continue;
        }

        cout << abs(r - l) << endl;
    }
}