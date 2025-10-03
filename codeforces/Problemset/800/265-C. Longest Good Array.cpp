#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2008/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        double s = r - l + 1;
        long long n = ceil((-1 + sqrt(1 + (8 * s))) / 2);
        cout << n << endl;
    }
}