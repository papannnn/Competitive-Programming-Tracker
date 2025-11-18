#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1779/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        if (n % 2) {
            for (int i = 0; i < n; i++) {
                if (i % 2) {
                    cout << n / 2 << " ";
                } else {
                    
                    cout << -(n / 2 - 1) << " ";
                }
            }
            cout << endl;
        } else {
            for (int i = 0 ; i < n; i++) {
                if (i % 2) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        }
        
    }
}