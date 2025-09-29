#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1926/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        int x, y;
        bool found = false;
        for (int i = 0 ; i < arr.size(); i++) {
            if (found) {
                break;
            }
            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] == '1') {
                    y = i;
                    x = j;
                    found = true;
                    break;
                }
            }
        }

        int xSize = 0;
        for (int i = x; i < arr[0].size(); i++) {
            if (arr[y][i] != '1') {
                break;
            }
            xSize++;
        }

        int ySize = 0;
        for (int i = y; i < arr.size(); i++) {
            if (arr[i][x] != '1') {
                break;
            }
            ySize++;
        }
        cout << (xSize == ySize ? "SQUARE" : "TRIANGLE") << endl;
    }
}