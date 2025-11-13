#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2057/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << endl;
    }
}