#include <bits/stdc++.h>

using namespace std;

struct Batu {
    int berat;
    int harga;
};

struct Result {
    int value;
    vector<int> items;
    int n;

    bool operator<(const Result &b) const {
        if (this->value != b.value) {
            return this->value < b.value;
        }

        if (this->n != b.n) {
            return this->n < b.n;
        }

        return this->items > b.items;
    }
};

Result solve(int idx, vector<Batu> &arr, int n, int currValue, vector<int> &takeRock, vector<vector<Result>> &memo) {
    if (idx == arr.size()) {
        Result result;
        result.value = currValue;
        result.items = takeRock;
        result.n = n;
        return result;
    }

    if (memo[n][idx].value != -1) {
        return memo[n][idx];
    }

    Result take;
    take.value = 0;
    if (arr[idx].berat <= n) {
        takeRock.push_back(idx + 1);
        take = solve(idx + 1, arr, n - arr[idx].berat, currValue + arr[idx].harga, takeRock, memo);
        takeRock.pop_back();
    }
    Result skip = solve(idx + 1, arr, n, currValue, takeRock, memo);
    memo[n][idx] = max(take, skip);
    return memo[n][idx];
}

int main () {
    int n, k;
    cin >> n >> k;
    vector<Batu> arr(k);
    for (Batu &b : arr) {
        cin >> b.berat >> b.harga;
    }

    vector<int> takeRock;
    Result temp;
    temp.value = -1;
    vector<vector<Result>> memo(n + 1, vector<Result>(k + 1, temp));
    Result res = solve(0, arr, n, 0, takeRock, memo);
    // cout << res.value << endl;
    sort(res.items.begin(), res.items.end());
    for (int &num : res.items) {
        cout << num << endl;
    }
}