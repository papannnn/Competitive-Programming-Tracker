#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2014/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long sum = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if (arr.size() <= 2) {
            cout << -1 << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        long long median = arr[arr.size() / 2];
        cout << max(0LL, 2 * n * median - sum + 1) << endl;
    }
}