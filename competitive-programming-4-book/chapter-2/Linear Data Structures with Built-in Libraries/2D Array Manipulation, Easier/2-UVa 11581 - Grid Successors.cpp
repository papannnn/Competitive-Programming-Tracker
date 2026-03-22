#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11581
// O(t)
bool isZero(int grid[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] > 0) {
                return false;
            }
        }
    }
    return true;
}

void exec(int grid[3][3]) {
    int h[3][3];
    h[0][0] = (grid[0][1] + grid[1][0]) % 2;
    h[0][1] = (grid[0][0] + grid[1][1] + grid[0][2]) % 2;
    h[0][2] = (grid[0][1] + grid[1][2]) % 2;

    h[1][0] = (grid[0][0] + grid[2][0] + grid[1][1]) % 2;
    h[1][1] = (grid[1][0] + grid[0][1] + grid[1][2] + grid[2][1]) % 2;
    h[1][2] = (grid[0][2] + grid[1][1] + grid[2][2]) % 2;

    h[2][0] = (grid[1][0] + grid[2][1]) % 2;
    h[2][1] = (grid[2][0] + grid[1][1] + grid[2][2]) % 2;
    h[2][2] = (grid[2][1] + grid[1][2]) % 2;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = h[i][j];
        }
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int grid[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%1d", &grid[i][j]);
            }
        }

        int res = -1;
        while (!isZero(grid)) {
            res++;
            exec(grid);
        }
        cout << res << endl;
    }
}