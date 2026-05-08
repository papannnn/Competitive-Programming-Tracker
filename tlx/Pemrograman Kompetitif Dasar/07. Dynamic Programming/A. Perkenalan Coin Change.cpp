#include <bits/stdc++.h>

using namespace std;

long long solve(int idx, vector<int> &koin, int k, vector<int> &memo) {
    if (k == 0) {
        return 0;
    }

    if (idx == koin.size()) {
        return INT_MAX;
    }

    if (memo[k] != -1) {
        return memo[k];
    }

    long long res = INT_MAX;
    long long take = INT_MAX;
    if (koin[idx] <= k) {
        take = solve(idx, koin, k - koin[idx], memo) + 1;
    }
    memo[k] = min(take, min(res, solve(idx + 1, koin, k, memo)));;
    return memo[k];
}

int main () {
    int n;
    cin >> n;
    vector<int> koin(n);
    
    for (int &num : koin) {
        cin >> num;
    }

    int k;
    cin >> k;
    vector<int> memo(k + 1, -1);
    long long res = solve(0, koin, k, memo);
    if (res == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << solve(0, koin, k, memo) << endl;
    }
}