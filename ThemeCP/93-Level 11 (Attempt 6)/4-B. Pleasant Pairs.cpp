#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1541/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        int res = 0;
        for (int i = 1; i <= n; i++) {
            long long val = arr[i];
            for (int j = val - i; j <= n; j += val) {
                if (j < 0) {
                    continue;
                }

                if (j < i) {
                    continue;
                }
                
                if (j == i) {
                    continue;
                }
                // cout << j << " ";

                // cout << val * arr[j] << " ";
                if (val * arr[j] == i + j) {
                    res++;
                }
            }
            // cout << endl;
        }
        // cout << endl;
        cout << res << endl;
    }
}