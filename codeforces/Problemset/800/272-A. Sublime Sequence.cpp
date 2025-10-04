#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2148/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k % 2) {
            cout << n << endl;
        } else {
            cout << 0 << endl;
        }
    }
}