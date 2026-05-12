#include <bits/stdc++.h>
int k;
using namespace std;
int dp(int idx, vector<int> &arr, vector<int> &memo) {
    if (idx == arr.size() - 1) {
        return 0;
    }

    if (memo[idx] != -1) {
        return memo[idx];
    }

    int res = INT_MAX;
    for (int i = 1; i <= k; i++) {
        int curr = INT_MAX;
        if (idx + i < arr.size()) {
            curr = dp(idx + i, arr, memo) + abs(arr[idx] - arr[idx + i]);
        }
        res = min(res, curr);
    }
    memo[idx] = res;
    return memo[idx];
}
int main () {
    int n;
    cin >> n >> k;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    vector<int> memo(n, -1);
    cout << dp(0, arr, memo) << endl;
}