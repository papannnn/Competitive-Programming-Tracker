#include <bits/stdc++.h>

using namespace std;

int pop(vector<vector<int>> &arr, int b, int k, int target, vector<vector<bool>> &visited) {
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
    vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<bool>> visited(n, vector<bool>(m));
    for (vector<int> &a : arr) {
        for (int &num : a) {
            cin >> num;
        }
    }

    int b, k;
    cin >> b >> k;
    int val = pop(arr, b, k, arr[b][k], visited);
    cout << (val * (val - 1)) << endl;
}