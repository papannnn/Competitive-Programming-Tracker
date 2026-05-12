#include <bits/stdc++.h>

using namespace std;
int dp(int idx, vector<int> &arr, vector<int> &memo) {
    if (idx == arr.size() - 1) {
        return 0;
    }

    if (memo[idx] != -1) {
        return memo[idx];
    }

    int curr = arr[idx];
    int jump1 = dp(idx + 1, arr, memo) + abs(arr[idx] - arr[idx + 1]);
    int jump2 = INT_MAX;

    if (idx + 2 < arr.size()) {
        jump2 =
            dp(idx + 2, arr, memo) +
            abs(arr[idx] - arr[idx + 2]);
    }
    memo[idx] = min(jump1, jump2);
    return memo[idx];
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }
    vector<int> memo(n, -1);
    cout << dp(0, arr, memo) << endl;
}