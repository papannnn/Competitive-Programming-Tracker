#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2091/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 1 ; i <= n; i += 2) {
            cout << i << " ";
        }

        for (int i = 2 ; i <= n - 1; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }
}
// 3
// 1 2 3
// 3 2 1

// 1 2 3 4 5
// 5 4 3 2 1

// 1 2 3 4 5
// 1 3 5 2 4
// 4 1 3 5 2
// 2 4 1 3 5
// 5 2 4 1 3
// 