#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1918/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << (m / 2) * n << endl;
    }
}