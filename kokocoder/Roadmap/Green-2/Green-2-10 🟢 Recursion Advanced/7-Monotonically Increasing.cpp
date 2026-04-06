#include <bits/stdc++.h>

using namespace std;
// O(C(m, n) * n)
void f(int idx, int n, int m, vector<vector<int>> &res, vector<int> &temp) {
    // cout << idx << endl;
    if (idx == n + 1) {
        if (temp.size() == n) {
            res.push_back(temp);
        }
        return;
    }

    for (int i = idx; i <= m; i++) {
        if (temp.empty() || i > temp.back()) {
            temp.push_back(i);
            f(idx + 1, n, m, res, temp);
            temp.pop_back();
        }
    }
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> res;
    vector<int> temp;
    f(1, n, m, res, temp);
    for (vector<int> &a : res) {
        for (int &num : a) {
            cout << num << " ";
        }
        cout << endl;
    }
}