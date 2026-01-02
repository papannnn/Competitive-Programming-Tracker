#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2147/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
        cout << n << " ";
        for (int i = 1; i <= n - 1; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
}