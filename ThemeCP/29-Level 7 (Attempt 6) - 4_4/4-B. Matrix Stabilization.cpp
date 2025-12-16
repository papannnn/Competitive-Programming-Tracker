#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1986/B
// O(t * m * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> arr;
        for (int i = 0 ; i < m; i++) {
            vector<int> temp(n);
            for (int &num : temp) {
                cin >> num;
            }
            arr.push_back(temp);
        }

        for (int i = 0 ; i < m; i++) {
            for (int j = 0; j < n; j++) {
                bool biggest = true;
                int maxVal = 0;
                if (i != 0) {
                    if (arr[i - 1][j] >= arr[i][j]) {
                        biggest = false;
                    }
                    maxVal = max(maxVal, arr[i - 1][j]);
                }

                if (j != 0) {
                    if (arr[i][j - 1] >= arr[i][j]) {
                        biggest = false;
                    }
                    maxVal = max(maxVal, arr[i][j - 1]);
                }

                if (i < m - 1) {
                    if (arr[i + 1][j] >= arr[i][j]) {
                        biggest = false;
                    }
                    maxVal = max(maxVal, arr[i + 1][j]);
                }

                if (j < n - 1) {
                    if (arr[i][j + 1] >= arr[i][j]) {
                        biggest = false;
                    }
                    maxVal = max(maxVal, arr[i][j + 1]);
                }

                if (biggest) {
                    arr[i][j] = maxVal;
                }
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}