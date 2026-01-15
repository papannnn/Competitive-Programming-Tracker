#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1822/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long outer = n * 4;
        outer += (n) * (n - 1) / 2;
        outer += (n - 1) * (n - 2) / 2;
        cout << outer + 1 << endl;
    }
}