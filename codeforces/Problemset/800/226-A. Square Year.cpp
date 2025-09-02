#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2114/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int root = sqrt(n);
        if (root * root == n) {
            cout << 0 << " " << sqrt(n) << endl;
        } else {
            cout << -1 << endl;
        }
    }
}