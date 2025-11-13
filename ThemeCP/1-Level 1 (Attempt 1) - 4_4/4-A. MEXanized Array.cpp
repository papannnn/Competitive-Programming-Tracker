#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1870/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (n < k) {
            cout << -1 << endl;
            continue;
        }

        if (x < k - 1) {
            cout << -1 << endl;
            continue;
        }

        int sum = 0;
        for (int i = 0 ; i < k; i++) {
            sum += i;
        }
        
        int remainder = n - k;
        int adder = k == x ? k - 1 : x;
        cout << sum + (adder * remainder) << endl;
    }
}