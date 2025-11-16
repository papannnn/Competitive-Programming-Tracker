#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2048/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        int need = n / k;
        int cnt = 1;
        // cout << k << endl;
        int j = 0;
        for (int i = n; i > need; i--) {
            cout << i << " ";
            j++;
            if (j % (k - 1) == 0 && cnt <= need) {
                cout << cnt++ << " ";
            }
        }
        cout << endl;
    }
}