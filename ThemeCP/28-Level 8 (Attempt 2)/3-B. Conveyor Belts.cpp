#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1811/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        long long a = min(min(x1, n - x1 + 1), min(y1, n - y1 + 1));
        long long b = min(min(x2, n - x2 + 1), min(y2, n - y2 + 1));
        // cout << a << endl;
        // cout << b << endl;
        cout << abs(b - a) << endl;;
    }
}