#include <bits/stdc++.h>

using namespace std;

struct Batu {
    int berat;
    int harga;
};

vector<int> resTake;
int resWeight = 0;
int resHarga = 0;
int solve(int idx, vector<Batu> &arr, int n, int res, vector<int> &takeRock, vector<vector<int>> &memo) {
    if (idx == arr.size()) {
        if (res > resHarga) {
            resTake = takeRock;
            resWeight = n;
            resHarga = res;
        } else if (res == resHarga) {
            if (n > resWeight) {
                resTake = takeRock;
                resWeight = n;
            } else if (n == resWeight) {
                vector<int> temp = takeRock < resTake ? takeRock : resTake;
                resTake = temp;
            }
        }
        
        return res;
    }

    if (memo[n][idx] != -1) {
        return memo[n][idx];
    }

    int take = 0;
    int skip = solve(idx + 1, arr, n, res, takeRock, memo);
    if (arr[idx].berat <= n) {
        takeRock.push_back(idx + 1);
        take = solve(idx + 1, arr, n - arr[idx].berat, res + arr[idx].harga, takeRock, memo);
        takeRock.pop_back();
    }
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
    vector<vector<int>> memo(n + 1, vector<int>(k + 1, -1));
    int res = solve(0, arr, n, 0, takeRock, memo);
    // cout << res << endl;
    for (int &num : resTake) {
        cout << num << endl;
    }
}