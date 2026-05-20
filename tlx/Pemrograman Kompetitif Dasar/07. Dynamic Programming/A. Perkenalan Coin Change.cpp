#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int &num : coins) {
        cin >> num;
    }

    int k;
    cin >> k;
    vector<int> memo(k + 1, 0);

    for (int i = 1; i <= k ; i++) {
        int best = 1e9;
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                best = min(best, memo[i - coins[j]] + 1);
            }
        }
        memo[i] = best;
    }
    if (memo[k] == 1e9) {
        cout << -1 << endl;
    } else {
        cout << memo[k] << endl;
    }
}