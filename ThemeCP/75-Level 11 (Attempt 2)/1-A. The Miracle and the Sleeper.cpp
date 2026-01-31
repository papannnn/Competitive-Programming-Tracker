#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1562/problem/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        if (l == r) {
            cout << 0 << endl;
            continue;
        }

        long long div = r / 2 + 1;
        if (div >= l) {
            cout << r % div << endl;
            continue;
        }

        cout << r % l << endl;
    }
}