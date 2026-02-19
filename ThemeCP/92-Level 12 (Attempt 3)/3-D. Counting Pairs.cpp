#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2051/D
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        long long sum = 0;
        for (long long &num : arr) {
            cin >> num;
            sum += num;
        }

        sort(arr.begin(), arr.end());
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            long long val = sum - arr[i];
            auto pos1 = lower_bound(arr.begin() + i + 1, arr.end(), val - y);
            auto pos2 = upper_bound(arr.begin() + i + 1, arr.end(), val - x);
            res += pos2 - pos1;
        }
        cout << res << endl;
    }
}