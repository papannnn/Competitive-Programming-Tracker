#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2020/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << n << endl;
            continue;
        }

        int res = 0;
        while (n) {
            if (k > n) {
                res += n;
                break;
            }

            long long num = k;
            while (num * k <= n) {
                num *= k;
            }
            n -= num;
            res++;
        }
        cout << res << endl;
    }
}