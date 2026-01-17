#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1676/D
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (vector<int> &temp : arr) {
            for (int &num : temp) {
                cin >> num;
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp = arr[i][j];

                int x = j - 1;
                int y = i - 1;
                while (x >= 0 && x < m && y >= 0 && y < n) {
                    temp += arr[y][x];
                    x--;
                    y--;
                }
                res = max(res, temp);

                x = j - 1;
                y = i + 1;
                while (x >= 0 && x < m && y >= 0 && y < n) {
                    temp += arr[y][x];
                    x--;
                    y++;
                }
                res = max(temp, res);

                x = j + 1;
                y = i + 1;
                while (x >= 0 && x < m && y >= 0 && y < n) {
                    temp += arr[y][x];
                    x++;
                    y++;
                }
                res = max(temp, res);

                x = j + 1;
                y = i - 1;
                while (x >= 0 && x < m && y >= 0 && y < n) {
                    temp += arr[y][x];
                    x++;
                    y--;
                }
                res = max(temp, res);
            }
        }
        cout << res << endl;
    }
}