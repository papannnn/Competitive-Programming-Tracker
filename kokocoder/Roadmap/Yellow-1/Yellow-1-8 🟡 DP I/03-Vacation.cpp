#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));
    for (vector<int> &a : arr) {
        for (int &num : a) {
            cin >> num;
        }
    }

    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for (int i = 1; i < n; i++) {
        dp[i][0] = arr[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = arr[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = arr[i][2] + max(dp[i - 1][1], dp[i - 1][0]);
    }

    cout << max(dp.back()[0], max(dp.back()[1], dp.back()[2])) << endl;
}