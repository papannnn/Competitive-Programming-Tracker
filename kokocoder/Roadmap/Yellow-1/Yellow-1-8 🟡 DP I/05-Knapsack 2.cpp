#include <bits/stdc++.h>

using namespace std;
const long long INF = 1e18;

struct Item {
    long long value;
    long long weight;
};

int main () {
    int n, k;
    cin >> n >> k;
    vector<Item> arr(n);
    long long totValue = 0;
    for (Item &item: arr) {
        cin >> item.weight >> item.value;
        totValue += item.value;
    }

    
    vector<vector<long long>> dp(n + 1, vector<long long>(totValue + 1, INF));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= totValue; j++) {
            dp[i][j] = dp[i - 1][j];

            if (j >= arr[i - 1].value && dp[i - 1][j - arr[i - 1].value] != INF) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j - arr[i - 1].value] + arr[i - 1].weight);
            }
        }
    }

    for (int i = totValue; i >= 0; i--) {
        if (dp[n][i] <= k) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}