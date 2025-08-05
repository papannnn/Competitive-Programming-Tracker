#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/509/A
// O(n * n)
int main () {
    int n;
    cin >> n;
    
    vector<vector<int>> arr(n);
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0) {
                arr[i].push_back(1);
            } else {
                arr[i].push_back(arr[i - 1][j] + arr[i][j - 1]);
            }
        }
    }

    cout << arr[n - 1][n - 1] << endl;
}