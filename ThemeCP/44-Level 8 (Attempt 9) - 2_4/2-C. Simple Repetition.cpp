#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2093/C
// O(t * n sqrt(n))
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        if (n == 1 && k == 2) {
            cout << "YES" << endl;
            continue;
        }

        if (k > 1) {
            cout << "NO" << endl;
            continue;
        }

        if (n <= 1) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}