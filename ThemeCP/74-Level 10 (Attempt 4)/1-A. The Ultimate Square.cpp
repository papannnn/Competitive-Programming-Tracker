#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1748/problem/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long res = ceil(static_cast<double>(n) / 2);
        cout << res << endl;
    }
}