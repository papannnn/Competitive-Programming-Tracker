#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2118/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n - 1) + (n - 2) << endl;
        int row = 1;
        for (int i = 1; i <= n - 1 ; i++) {
            cout << row << " " << 1 << " " << i + 1 << endl;
            row++;
        }

        for (int i = 2; i <= n - 1; i++) {
            cout << row << " " << i << " " << n << endl;
            row++;
            if (row == n + 1) {
                row = 1;
            }
        }
    }
}