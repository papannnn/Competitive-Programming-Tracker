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
        // cout << "cnt: " << cnt << endl;
        bool valid = false;
        // for (auto &mapping : rowCnt) {
        //     cout << "RowCnt: " << mapping.first << " " << mapping.second << endl;
        //     if (valid) {
        //         break;
        //     }
        //     for (int i = 0; i < m; i++) {
        //         int minus = rowCnt.find(i) != rowCnt.end();
        //         cout << "Pos: " << i << endl;
        //         cout << "Tot: " << mapping.second + colCnt[i] - minus << endl;
        //         if (mapping.second + colCnt[i] - minus == cnt) {
        //             valid = true;
        //             break;
        //         }
        //     }
        // }

        // for (auto &mapping : colCnt) {
        //     cout << "ColCnt: " << mapping.first << " " << mapping.second << endl;
        //     if (valid) {
        //         break;
        //     }
        //     for (int i = 0; i < n; i++) {
        //         int minus = colCnt.find(i) != colCnt.end();
        //         cout << "Pos: " << i << endl;
        //         cout << "Tot: " << mapping.second + rowCnt[i] - minus << endl;
        //         if (mapping.second + rowCnt[i] - minus == cnt) {
        //             valid = true;
        //             break;
        //         }
        //     }
        // }

        // for (auto &mapping : rowCnt) {
        //     cout << "Row: " << mapping.first << " " << mapping.second << endl;
        // }

        // for (auto &mapping : colCnt) {
        //     cout << "Col: " << mapping.first << " " << mapping.second << endl;
        // }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                int minus = arr[i][j] == maxVal;
                // cout << rowCnt[i] + colCnt[j] - minus << " ";
                if (rowCnt[i] + colCnt[j] - minus == cnt) {
                    valid = true;
                }
            }
            // cout << endl;
        }

        if (valid) {
            cout << maxVal - 1 << endl;
        } else {
            cout << maxVal << endl;
        }
    }
}