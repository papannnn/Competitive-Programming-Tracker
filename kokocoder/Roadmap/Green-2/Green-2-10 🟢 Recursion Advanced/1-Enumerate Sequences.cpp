#include <bits/stdc++.h>

using namespace std;
int x = 0;
void f(int idx, int n, int k, set<vector<int>> &res, vector<int> &curr, vector<int> &arr, int sum) {
    x++;
    if (idx == n) {
        return;
    }

    if (sum % k == 0) {
        res.insert(curr);
    }

    if (curr[idx] < arr[idx]) {
        curr[idx]++;
        f(idx, n, k, res, curr, arr, sum + 1);
        curr[idx]--;
    }
    
    f(idx + 1, n, k, res, curr, arr, sum);
}

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }
    vector<int> curr(n, 1);
    set<vector<int>> res;
    f(0, n, k, res, curr, arr, n);
    for (auto &a : res) {
        for (auto &num : a) {
            cout << num << " ";
        }
        cout << endl;
    }
}