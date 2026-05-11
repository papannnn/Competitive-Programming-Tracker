#include <bits/stdc++.h>

using namespace std;

struct Batu {
    long long berat;
    long long harga;
};

pair<long long,long long> solve(long long idx, vector<Batu> &arr, long long n, vector<vector<pair<long long,long long>>> &memo) {
    if (idx == (long long)arr.size()) return {0, 0};
    if (memo[n][idx].first != -1) return memo[n][idx];

    pair<long long,long long> skip = solve(idx + 1, arr, n, memo);

    pair<long long,long long> take = {-1, 0};
    if (arr[idx].berat <= n) {
        auto [v, w] = solve(idx + 1, arr, n - arr[idx].berat, memo);
        take = {v + arr[idx].harga, w + arr[idx].berat};
    }

    pair<long long,long long> best;
    if (take.first > skip.first)
        best = take;
    else if (take.first == skip.first && take.second <= skip.second)
        best = take;
    else
        best = skip;

    return memo[n][idx] = best;
}

int main () {
    long long n, k;
    cin >> n >> k;
    vector<Batu> arr(k);
    for (Batu &b : arr) {
        cin >> b.berat >> b.harga;
    }

    vector<vector<pair<long long, long long>>> memo(n + 1, vector<pair<long long, long long>>(k + 1, {-1, -1}));
    pair<long long, long long> state = {0, 0};
    solve(0, arr, n, memo);
    // cout << res.first << " " << res.second << endl;

    vector<long long> res;
    for (long long i = 0; i < (long long)arr.size(); i++) {
        if (n >= arr[i].berat) {
            auto [tv, tw] = solve(i + 1, arr, n - arr[i].berat, memo);
            tv += arr[i].harga;
            tw += arr[i].berat;
            auto [sv, sw] = solve(i + 1, arr, n, memo);

            bool prefer_take = false;
            if (tv > sv) prefer_take = true;
            else if (tv == sv && tw <= sw) prefer_take = true;

            if (prefer_take) {
                n -= arr[i].berat;
                res.push_back(i + 1);
            }
        }
    }

    for (long long &num : res) {
        cout << num << endl;
    }
}