#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (vector<char> &a : arr) {
        for (char &c : a) {
            cin >> c;
        }
    }

    vector<int> helper = {-1, 0, 1};

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '#') {
                continue;
            }

            int cnt = 0;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (i + helper[k] < 0 || i + helper[k] >= n) {
                        continue;
                    }

                    if (j + helper[l] < 0 || j + helper[l] >= m) {
                        continue;
                    }

                    cnt += arr[i + helper[k]][j + helper[l]] == '#';
                }
            }
            arr[i][j] = '0' + cnt;
        }
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}