#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1850/E
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long l = 1;
        long long r = 4e9;
        long long res = -1;
        while (l <= r) {
            __int128 mid = l + (r - l) / 2;
            __int128 tot = 0;
            for (int i = 0 ; i < arr.size(); i++) {
                tot += (mid * 2 + arr[i]) * (mid * 2 + arr[i]);
            }

            if (tot > c) {
                r = mid - 1;
            } else {
                res = mid;
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
}