#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1506/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;
        long long a = ((x - 1) % n * m);
        long long b = ceil((double) x / n);
        cout << a + b << endl;
    }
}