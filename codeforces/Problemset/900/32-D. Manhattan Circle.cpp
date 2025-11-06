#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1985/D
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        int x = -1;
        int y = -1;
        for (int i = 0; i < n; i++) {
            if (x != -1) {
                break;
            }

            for (int j = 0 ; j < m; j++) {
                if (arr[i][j] == '#') {
                    x = j;
                    y = i;
                    break;
                }
            }
        }

        int ptr = y;
        while (ptr < n && arr[ptr][x] == '#') {
            ptr++;
        }
        cout << y + (abs(y - (ptr)) / 2) + 1 << " " << x + 1 << endl;
    }
}