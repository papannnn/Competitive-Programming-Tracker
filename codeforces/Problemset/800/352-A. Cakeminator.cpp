#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/330/A
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (string &s : arr) {
        cin >> s;
    }

    int res = 0;
    for (int i = 0 ; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'S') {
                flag = false;
                break;
            }
        }

        if (!flag) {
            continue;
        }

        for (int j = 0; j < m; j++) {
            if (arr[i][j] != '#') {
                arr[i][j] = '#';
                res++;
            }
        }
    }

    for (int i = 0 ; i < m; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == 'S') {
                flag = false;
                break;
            }
        }

        if (!flag) {
            continue;
        }

        for (int j = 0; j < n; j++) {
            if (arr[j][i] != '#') {
                arr[j][i] = '#';
                res++;
            }
        }
    }
    cout << res << endl;
}