#include <bits/stdc++.h>
 
using namespace std;
// https://codeforces.com/problemset/problem/1765/M
// O(t * sqrt(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        int res = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                res = n / i;
                break;
            }
        }
        cout << res << " " << n - res << endl;
    }
}