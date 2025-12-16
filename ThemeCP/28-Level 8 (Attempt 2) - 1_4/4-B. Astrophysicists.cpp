#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1836/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, g;
        cin >> n >> k >> g;
        long long sum = k * g;
        if (sum <= (g - 1) / 2 * n) {
            cout << sum << endl;
            continue;
        }
        
        long long res = (g - 1) / 2 * (n - 1);
        sum = (sum - res) % g;
        if (sum % g <= (g - 1) / 2) {
            res += sum % g;
        } else {
            res -= g - sum % g;
        }

        cout <<res << endl;
    }
}