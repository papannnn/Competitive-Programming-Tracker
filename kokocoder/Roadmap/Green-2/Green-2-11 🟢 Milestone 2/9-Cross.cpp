#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (string &s : arr) {
        cin >> s;
    }

    int x = min(n, m);
    vector<int> res(x + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                continue;
            }

            if (arr[i][j] == '#' && 
                arr[i - 1][j - 1] == '#' &&
                arr[i + 1][j + 1] == '#' && 
                arr[i - 1][j + 1] == '#' &&
                arr[i + 1][j - 1] == '#'
            ) {
                int k = i - 1;
                int l = j - 1;
                int len = 0;
                while (k >= 0 && l >= 0 && arr[k][l] == '#') {
                    len++;
                    k--;
                    l--;
                }
                res[len]++;
            }
        }
    }

    for (int i = 1; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}