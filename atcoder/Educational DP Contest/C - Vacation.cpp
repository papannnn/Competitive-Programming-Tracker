#include <bits/stdc++.h>

using namespace std;

long long dp(int idx, vector<long long> &swim, vector<long long> &catchBug, vector<long long> &homework, int choose, vector<vector<long long>> &memo) {
    if (idx == swim.size()) {
        return 0;
    }

    if (memo[idx][choose] != -1) {
        return memo[idx][choose];
    }

    if (choose == 1) { // Swim
        memo[idx][choose] = max(catchBug[idx] + dp(idx + 1, swim, catchBug, homework, 2, memo), homework[idx] + dp(idx + 1, swim, catchBug, homework, 3, memo));
        return memo[idx][choose];
    }

    if (choose == 2) {
        memo[idx][choose] = max(swim[idx] + dp(idx + 1, swim, catchBug, homework, 1, memo), homework[idx] + dp(idx + 1, swim, catchBug, homework, 3, memo));
        return memo[idx][choose];
    }

    memo[idx][choose] = max(catchBug[idx] + dp(idx + 1, swim, catchBug, homework, 2, memo), swim[idx] + dp(idx + 1, swim, catchBug, homework, 1, memo));
    return memo[idx][choose];
}

int main () {
    long long n;
    cin >> n;
    vector<long long> swim(n);
    vector<long long> catchBug(n);
    vector<long long> homework(n); 

    for (int i = 0 ; i < n; i++) {
        cin >> swim[i] >> catchBug[i] >> homework[i];
    }

    vector<vector<long long>> memo(n, vector<long long>(4, -1));
    long long res = max(swim[0] + dp(1, swim, catchBug, homework, 1, memo), max(catchBug[0] + dp(1, swim, catchBug, homework, 2, memo), homework[0] + dp(1, swim, catchBug, homework, 3, memo)));
    cout << res << endl;
}