#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2037/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 4) {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 1; i <= n; i += 2) {
            if (i == 5) {
                continue;
            }
            cout << i << " ";
        }
        cout << 5 << " ";

        for (int i = 4; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << 2 << endl;
    }
}