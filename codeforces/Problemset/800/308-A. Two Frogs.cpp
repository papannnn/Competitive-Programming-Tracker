#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2055/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}