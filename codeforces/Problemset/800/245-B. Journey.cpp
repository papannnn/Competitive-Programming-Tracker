#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2051/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int res = 0;
        if (n / (a + b + c)) {
            res += n / (a + b + c);
            n -= res * (a + b + c);
            res *= 3;
        }

        if (n > 0) {
            n -= a;
            res++;
        }

        if (n > 0) {
            n -= b;
            res++;
        }

        if (n > 0) {
            n -= c;
            res++;
        }
        cout << res << endl;
    }
}