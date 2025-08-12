#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1814/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        if (k == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        if (n % 2 == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (n % k == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (n % 2 == 1 && k % 2 == 0) {
            cout << "NO" << endl;
            continue;
        }

        if (n - k >= 2 && (n - k) % 2 == 0) {
            cout << "YES" << endl;
            continue;
        }
        
        cout << "NO" << endl;
    }
}