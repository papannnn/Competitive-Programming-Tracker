#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1843/C
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long res = 0;
        while (n) {
            res += n;
            n /= 2;
        }
        cout << res << endl;
    }
}