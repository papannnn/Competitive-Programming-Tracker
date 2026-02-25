#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1848/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        if (k == 1) {
            cout << 0 << endl;
            continue;
        }

        int res = 1e9;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j + i <= n; j++) {
                int x = 0;
                bool fail = false;
                for (int k = i; k <= n; k += j) {
                    if (arr[k] != arr[i]) {
                        x++;
                    }

                    if (x == 2) {
                        fail = true;
                        break;
                    }
                    // cout << arr[k] << " ";
                }
                // cout << endl;
                // cout << j - 1 << endl << endl;
                if (!fail)
                res = min(res, j - 1);
            }
        }
        cout << res << endl;
    }
}