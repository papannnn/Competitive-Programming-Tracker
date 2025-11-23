#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1758/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2) {
            for (int i = 0 ; i < n; i++) {
                cout << 69 << " ";
            }
            cout << endl;
            continue;
        }

        for (int i = 0 ; i < n - 1; i++) {
            cout << n + 1 << " ";
        }
        cout << 1 << endl;
    }
}