#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2139/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }
        sort(arr.begin(), arr.end());

        long long res = 0;
        for (int i = arr.size() - 1; i >= 0 && m; i--) {
            res += arr[i] * m;
            m--;
        }
        cout << res << endl;
    }
}