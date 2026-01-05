#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1793/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long n, m;
        cin >> n >> m;

        if (n <= m) {
            cout << min(a, b) * n << endl;
            continue;
        }
        
        long long res = n / (m + 1) * m * a;
        res += (n % (m + 1)) * min(a, b);

        long long res2 = n * b;

        cout << min(res, res2) << endl;
    }
}