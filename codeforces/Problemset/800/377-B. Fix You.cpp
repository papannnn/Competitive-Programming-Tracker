#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1391/B
// O(t * (m + n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<string> arr(m);
        for (string &s : arr) {
            cin >> s;
        }

        int res = 0;
        for (int i = 0 ; i < n - 1; i++) {
            if (arr[m - 1][i] == 'D') {
                res++;
            }
        }

        for (int i = 0 ; i < m - 1; i++) {
            if (arr[i][n - 1] == 'R') {
                res++;
            }
        }
        cout << res << endl;
    }
}