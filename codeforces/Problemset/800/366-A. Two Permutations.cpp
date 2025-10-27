#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1761/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if ((a + b) == n * 2) {
            cout << "Yes" << endl;
            continue;
        }

        cout << (n - (a + b) <= 1 ? "No" : "Yes") << endl;
    }
}