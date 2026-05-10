#include <bits/stdc++.h>

using namespace std;

struct Batu {
    long long berat;
    long long harga;
};

long long solve(long long idx, vector<Batu> &arr, long long n, vector<vector<long long>> &memo) {
    if (idx == arr.size()) {
        return 0;
    }

    if (memo[n][idx] != -1) {
        return memo[n][idx];
    }

    long long take = 0;
    if (arr[idx].berat <= n) {
        take = solve(idx + 1, arr, n - arr[idx].berat, memo) + arr[idx].harga;
    }
    long long skip = solve(idx + 1, arr, n, memo);
    memo[n][idx] = max(take, skip);
    return memo[n][idx];
}

int main () {
    long long n, k;
    cin >> n >> k;
    vector<Batu> arr(k);
    for (Batu &b : arr) {
        cin >> b.berat >> b.harga;
    }

    vector<vector<long long>> memo(n + 1, vector<long long>(k + 1, -1));
    solve(0, arr, n, memo);

    vector<long long> res;
    for (long long i = 0; i < arr.size(); i++) {
        if (n >= arr[i].berat) {
            long long take = arr[i].harga + solve(i + 1, arr, n - arr[i].berat, memo);
            long long skip = solve(i + 1, arr, n, memo);
            if (take >= skip) {
                n -= arr[i].berat;
                res.push_back(i + 1);
            }
        }
    }

    for (long long &num : res) {
        cout << num << endl;
    }
}