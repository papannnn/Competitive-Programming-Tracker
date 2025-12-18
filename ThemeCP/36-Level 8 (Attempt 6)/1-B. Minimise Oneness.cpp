#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2030/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0 ; i < n - 1; i++) {
            cout << 0;
        }
        cout << 1;
        cout << endl;
    }
}