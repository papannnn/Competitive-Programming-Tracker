#include <bits/stdc++.h>

using namespace std;

long long pop(vector<vector<char>> &arr, int b, int k, char target, vector<vector<bool>> &visited) {
    if (b == -1 || k == -1 || b == arr.size() || k == arr[0].size()) {
        return 0;
    }

    if (arr[b][k] != target) {
        return 0;
    }

    if (visited[b][k]) {
        return 0;
    }

    visited[b][k] = true;
    arr[b][k] = '0';
    return 1 + pop(arr, b + 1, k, target, visited)
     + pop(arr, b - 1, k, target, visited) 
     + pop(arr, b, k + 1, target, visited) 
     + pop(arr, b, k - 1, target, visited);
}

int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (vector<char> &a : arr) {
        for (char &num : a) {
            cin >> num;
        }
    }

    long long res = 0;
    vector<vector<bool>> visited(n, vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j]) {
                continue;
            }

            vector<vector<char>> temp(arr);
            long long val = pop(temp, i, j, temp[i][j], visited);
            if (val == 1) {
                continue;
            }

            for (int k = 0; k < m; k++) {
                for (int l = 0; l < n - 1; l++) {
                    for (int z = 0; z < n - l - 1; z++) {
                        if (temp[z + 1][k] == '0') {
                            swap(temp[z][k], temp[z + 1][k]);
                        }
                    }
                }
            }

            vector<vector<bool>> visitedLocal(n, vector<bool>(m));
            long long val1 = 0;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    if (temp[k][l] == '0') {
                        continue;
                    }
                    val1 = max(val1, pop(temp, k, l, temp[k][l], visitedLocal));
                }
            }
            res = max(res, (val1 * (val1 - 1)) + (val * (val - 1)));
        }
    }
    cout << res << endl;
}