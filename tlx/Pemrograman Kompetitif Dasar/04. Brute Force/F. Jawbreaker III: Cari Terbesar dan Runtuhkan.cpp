#include <bits/stdc++.h>

using namespace std;

int pop(vector<vector<char>> &arr, int b, int k, char target, vector<vector<bool>> &visited) {
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

    int res = 0;
    int resB = 0;
    int resK = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vector<vector<bool>> visited(n, vector<bool>(m));
            int val = pop(arr, i, j, arr[i][j], visited);
            if (val > res) {
                res = val;
                resB = i;
                resK = j;
            }
        }
    }
    
    vector<vector<bool>> visited(n, vector<bool>(m));
    pop(arr, resB, resK, arr[resB][resK], visited);

    for (int i = 0 ; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (visited[i][j]) {
                arr[i][j] = '.';
            }
            // cout << arr[i][j] << " ";
        }
        // cout << endl;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (arr[k + 1][i] == '.') {
                    swap(arr[k][i], arr[k + 1][i]);
                }
            }
        }
    }

    for (int i = 0 ; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}