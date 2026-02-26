#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1607/C
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long mod = 0;
        long long res = -1e9;
        sort(arr.begin(), arr.end(), greater<int>());
        while (arr.size() != 0) {
            long long temp = arr.back() - mod;
            // cout << temp << " ";
            res = max(res, temp);
            mod += temp;
            arr.pop_back();
        }
        // cout << endl;
        cout << res << endl;
    }
}