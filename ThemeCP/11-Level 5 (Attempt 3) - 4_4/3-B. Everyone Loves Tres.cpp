#include <bits/stdc++.h>

using namespace std;
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << -1 << endl;
            continue;
        } else if (n == 2) {
            cout << 66 << endl;
            continue;
        } else if (n == 3) {
            cout << -1 << endl;
            continue;
        }

        if (n % 2) {
            for (int i = 0 ; i < n - 4; i++) {
                cout << 3;
            }
            cout << 6366;
        } else {
            for (int i = 0 ; i < n - 2; i++) {
                cout << 3;
            }
            cout << 66;
        }
        cout << endl;
    }
}