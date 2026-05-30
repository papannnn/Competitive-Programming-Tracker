#include <bits/stdc++.h>

using namespace std;

struct Item {
    long long weight;
    long long value;
};

int main () {
    int n, w;
    cin >> n >> w;
    vector<Item> arr(n);
    for (Item &itm : arr) {
        cin >> itm.weight >> itm.value;
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(w + 1));
    for (int i = 0 ; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                long long take = 0;

                if (j >= arr[i - 1].weight) {
                    take = arr[i - 1].value + dp[i - 1][j - arr[i - 1].weight];
                }

                long long notTake = dp[i - 1][j];
                dp[i][j] = max(notTake, take);
            }
        }
    }
    cout << dp[n][w] << endl;
}