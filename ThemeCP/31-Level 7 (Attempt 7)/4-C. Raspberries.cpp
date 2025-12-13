#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1883/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 1e9;
        long long prod = 1;
        int even = 0;
        unordered_map<int, int> mapping;
        for (int i = 0 ; i < arr.size(); i++) {
            res = min(res, k - (arr[i] % k));
            if (arr[i] % k == 0) {
                res = 0;
            }
            even += arr[i] % 2 == 0;
        }

        if (k == 4) {
            if (even >= 2) {
                res = min(res, 0);
            }
            
            if (even == 1) {
                res = min(res, 1);
            }

            if (even == 0) {
                res = min(res, 2);
            }
        }
        cout << res << endl;
    }
}