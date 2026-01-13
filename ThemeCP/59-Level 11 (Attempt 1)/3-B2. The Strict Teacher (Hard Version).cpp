#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2005/B2
// O(t * q log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> arr(m);
        for (int &num : arr) {
            cin >> num;
        }
        
        sort(arr.begin(), arr.end());

        for (int i = 0 ; i < q; i++) {
            int david;
            cin >> david;

            if (david < arr[0]) {
                // Left
                cout << arr[0] - 1 << endl;
                continue;
            }

            if (david > arr[arr.size() - 1]) {
                // Right
                cout << n - arr[arr.size() - 1] << endl;
                continue;
            }

            int left = *(lower_bound(arr.begin(), arr.end(), david) - 1);
            int right = *(lower_bound(arr.begin(), arr.end(), david));
            int res = ceil((double) (right - left - 1) / 2);
            cout << res << endl;
        }
    }
}