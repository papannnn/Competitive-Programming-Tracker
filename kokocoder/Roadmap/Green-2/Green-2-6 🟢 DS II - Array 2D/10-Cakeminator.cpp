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

    int res = 0;
    for (int i = 0; i < n; i++) {
        bool clear = true;
        for (int j = 0 ; j < m; j++) {
            if (arr[i][j] == 'S') {
                clear = false;
                break;
            }
        }

        if (!clear) {
            continue;
        }

        for (int j = 0 ; j < m; j++) {
            if (arr[i][j] == '.') {
                arr[i][j] = ' ';
                res++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        bool clear = true;
        for (int j = 0 ; j < n; j++) {
            if (arr[j][i] == 'S') {
                clear = false;
                break;
            }
        }

        if (!clear) {
            continue;
        }

        for (int j = 0 ; j < n; j++) {
            if (arr[j][i] == '.') {
                arr[j][i] = ' ';
                res++;
            }
        }
    }
    cout << res << endl;
}