#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    vector<int> dp(n);
    for (int i = 1; i <= k; i++) {
        if (i == arr.size()) {
            break;
        }
        dp[i] = abs(arr[i] - arr[0]);
    }

    for (int i = k + 1; i < arr.size(); i++) {
        int val = 1e9;
        for (int j = 1; j <= k; j++) {
            val = min(val, dp[i - j] + abs(arr[i] - arr[i - j]));
        }
        dp[i] = val;
    }

    cout << dp.back() << endl;
}