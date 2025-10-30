#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2148/B
// O(t * (n + m))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
        }

        for (int i = 0 ; i < m; i++) {
            int num;
            cin >> num;
        }

        cout << n + m << endl;
    }
}