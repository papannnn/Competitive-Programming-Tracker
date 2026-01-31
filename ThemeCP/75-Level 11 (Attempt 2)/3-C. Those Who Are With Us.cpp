#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2121/problem/C
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int maxVal = 0;
        vector<vector<int>> arr(n, vector<int>(m));
        for (vector<int>& a : arr) {
            for (int& num : a) {
                cin >> num;
                maxVal = max(maxVal, num);
            }
        }

        if (n == 1 || m == 1) {
            cout << maxVal - 1 << endl;
            continue;
        }

        int cnt = 0;
        unordered_map<int, int> rowCnt;
        unordered_map<int, int> colCnt;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == maxVal) {
                    cnt++;
                    rowCnt[i]++;
                    colCnt[j]++;
                }
            }
        }
        
        bool valid = false;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                int minus = arr[i][j] == maxVal;
                if (rowCnt[i] + colCnt[j] - minus == cnt) {
                    valid = true;
                }
            }
        }

        if (valid) {
            cout << maxVal - 1 << endl;
        } else {
            cout << maxVal << endl;
        }
    }
}