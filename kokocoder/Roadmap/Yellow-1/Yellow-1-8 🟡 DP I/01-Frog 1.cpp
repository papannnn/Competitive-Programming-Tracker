#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    vector<int> dp(n);
    dp[1] = abs(arr[1] - arr[0]);
    dp[2] = abs(arr[2] - arr[0]);
    for (int i = 3; i < arr.size(); i++) {
        dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }

    cout << dp.back() << endl;
}