#include <bits/stdc++.h>

using namespace std;
// O(n ^ 2)
int main () {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    vector<vector<int>> move = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0}
    };

    arr[n / 2][n / 2] = -1;

    int x = 0;
    int y = 0;
    int ptr = 0;
    int val = 1;
    while (true) {
        if (arr[y][x] == -1) {
            break;
        }

        arr[y][x] = val++;
        if (y + move[ptr][0] < 0 || y + move[ptr][0] == n) {
            ptr++;
            if (ptr == 4) {
                ptr = 0;
            }
        }

        if (x + move[ptr][1] < 0 || x + move[ptr][1] == n) {
            ptr++;
            if (ptr == 4) {
                ptr = 0;
            }
        }

        if (arr[y + move[ptr][0]][x + move[ptr][1]] != 0) {
            ptr++;
            if (ptr == 4) {
                ptr = 0;
            }
        }

        x += move[ptr][1];
        y += move[ptr][0];
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == -1) {
                cout << "T ";
            } else {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}