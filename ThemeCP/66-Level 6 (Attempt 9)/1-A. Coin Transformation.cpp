#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2043/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n <= 3) {
            cout << 1 << endl;
            continue;
        }

        long long res = 1;
        while (n > 3) {
            n /= 4;
            res *= 2;
        }
        cout << res << endl;
    }
}