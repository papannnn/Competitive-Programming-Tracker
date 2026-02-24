#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1872/problem/D
// O(t)
long long compute(long long start, long long end) {
    return (end + start) * (end - start + 1) / 2;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long cnt1 = (n / x) - (n / lcm(x, y));
        long long cnt2 = (n / y) - (n / lcm(x, y));

        long long res = compute(n - cnt1 + 1, n) - compute(1, cnt2);
        cout << res << endl;
    }
}