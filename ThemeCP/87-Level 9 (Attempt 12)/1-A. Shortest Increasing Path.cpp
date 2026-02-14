#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2147/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            cout << -1 << endl;
            continue;
        }

        if (x > y) {
            if ((x - 1) > y && y > 1) {
                cout << 3 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << 2 << endl;
        }
    }
}