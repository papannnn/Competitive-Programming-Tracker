#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/631793#problem/A
// O(sqrt(n))
int main () {
    long long n;
    cin >> n;
    long long res = n - 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            res = min(res, (i - 1) + (n / i - 1));
        }
    }
    cout << res << endl;
}