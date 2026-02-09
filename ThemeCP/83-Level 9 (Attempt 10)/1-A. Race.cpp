#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2112/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        if (a == x || a == y) {
            cout << "NO" << endl;
            continue;
        }

        int maxVal = max(x, y);
        int minVal = min(x, y);

        if (minVal <= a && maxVal >= a) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}