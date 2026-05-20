#include <bits/stdc++.h>

using namespace std;

struct Item {
    long long weight;
    long long value;
};

int main () {
    long long n, k;
    cin >> k >> n;
    vector<Item> arr(n);
    for (Item &i : arr) {
        cin >> i.weight >> i.value;
    }

    vector<vector<long long>> memo(n + 1, vector<long long>(k + 1, 0));
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1 ; j <= k; j++) {
            long long pick = 0;

            if (arr[i - 1].weight <= j) {
                pick = arr[i - 1].value
                    + memo[i - 1][j - arr[i - 1].weight];
            }

            long long notPick = memo[i - 1][j];

            memo[i][j] = max(pick, notPick);
        }
    }
    cout << memo[n][k] << endl;
}