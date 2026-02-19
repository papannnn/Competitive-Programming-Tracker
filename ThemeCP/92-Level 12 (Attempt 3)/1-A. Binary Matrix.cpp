#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2082/A
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m));
        for (vector<char> &a : arr) {
            for (char &num : a) {
                cin >> num;
            }
        }

        int r = 0;
        for (int i = 0 ; i < n; i++) {
            int tot = 0;
            for (int j = 0; j < m; j++) {
                tot += arr[i][j] == '1';
            }
            r += tot % 2;
        }

        int c = 0;
        for (int i = 0; i < m; i++) {
            int tot = 0;
            for (int j = 0; j < n; j++) {
                tot += arr[j][i] == '1';
            }
            c += tot % 2;
        }
        cout << max(r, c) << endl;
    }
}