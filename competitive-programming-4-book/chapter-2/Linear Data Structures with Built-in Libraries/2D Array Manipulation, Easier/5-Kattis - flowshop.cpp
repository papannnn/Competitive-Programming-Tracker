#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/flowshop
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (vector<int> &a : arr) {
        for (int &n : a) {
            cin >> n;
        }
    }

    for (int i = 1; i < n; i++) {
        arr[i][0] += arr[i - 1][0];
    }

    for (int i = 1; i < m; i++) {
        arr[0][i] += arr[0][i - 1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            arr[i][j] += max(arr[i - 1][j], arr[i][j - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i][m - 1] << " ";
    }
}