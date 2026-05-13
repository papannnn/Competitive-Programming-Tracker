#include <bits/stdc++.h>

using namespace std;

struct Item {
    long long weight;
    long long value;
};
//100000
long long w;
long long dp(int idx, long long weight, vector<Item> &arr, map<pair<long long, long long>, long long> &memo) {
    if (idx == arr.size()) {
        return 0;
    }

    auto key = make_pair(idx, weight);
    auto it = memo.find(key);
    if (it != memo.end()) return it->second;

    long long skip = dp(idx + 1, weight, arr, memo);
    long long take = -1;
    if (weight + arr[idx].weight <= w) {
        take = dp(idx + 1, weight + arr[idx].weight, arr, memo) + arr[idx].value;
    }
    memo[key] = max(skip, take);
    return memo[key];
}

int main () {
    long long n;
    cin >> n >> w;

    vector<Item> arr(n);
    long long sumVal = 0;
    for (Item &item : arr) {
        cin >> item.weight >> item.value;
        sumVal += item.value;
    }

    map<pair<long long, long long>, long long> memo;
    cout << dp(0, 0, arr, memo) << endl;
}