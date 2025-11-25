#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1777/B
// O(t * n)
long long mod = (1e9 + 7);
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        long long f = 1;
        for (int i = 1; i <= n; i++) {
            f = f * i % mod;
        }
        long long a = n - 1;
        long long res = a * n % mod;
        res = res * f % mod;
        cout << res % mod << endl;
    }
}
