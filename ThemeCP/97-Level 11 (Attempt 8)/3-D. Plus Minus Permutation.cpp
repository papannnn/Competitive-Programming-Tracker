#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1872/D
// O(t * log n)
long long sumRange(long long start, long long end) {
    return (start + end) * (end - start + 1) / 2;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long count1 = (n / x) - (n / lcm(x, y));
        long long count2 = (n / y) - (n / lcm(x, y));
        // cout << count1 << endl;
        // cout << count2 << endl;
        long long res = sumRange(n - count1 + 1, n) - sumRange(1, count2);
        cout << res << endl << endl;;
    }
}