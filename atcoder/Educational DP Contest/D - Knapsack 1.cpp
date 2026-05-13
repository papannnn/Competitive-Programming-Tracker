#include <bits/stdc++.h>

using namespace std;
long long w;
struct Item {
    long long weight;
    long long value;
};

long long dp(int idx, int weight, vector<Item> &items, vector<vector<long long>> &memo) {
    if (idx == items.size()) {
        return 0;
    }

    if (memo[idx][weight] != -1) {
        return memo[idx][weight];
    }

    long long skip = dp(idx + 1, weight, items, memo);
    long long take = -1;
    if (weight + items[idx].weight <= w) {
        take = items[idx].value + dp(idx + 1, weight + items[idx].weight, items, memo);
    }
    memo[idx][weight] = max(skip, take);
    return memo[idx][weight];
}

int main () {
    long long n;
    cin >> n >> w;
    vector<Item> items(n);
    for (Item &itm : items) {
        cin >> itm.weight >> itm.value;
    }

    vector<vector<long long>> memo(n + 1, vector<long long>(w + 1, -1));
    cout << dp(0, 0, items, memo) << endl;
}