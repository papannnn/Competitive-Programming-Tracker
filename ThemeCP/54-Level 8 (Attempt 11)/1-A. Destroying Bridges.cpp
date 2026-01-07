#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1944/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k >= n - 1) {
            cout << 1 << endl;
            continue;
        }
        cout << n << endl;
    }
}