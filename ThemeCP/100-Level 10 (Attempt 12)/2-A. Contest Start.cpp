#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1539/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, t;
        cin >> n >> x >> t;
        long long m = min(n, t / x);
        cout << (m * (2 * n - 1 - m) / 2) << endl;   
    }
}