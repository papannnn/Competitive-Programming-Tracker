#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/2048
// O(1)
int main () {
    vector<vector<int>> arr(4, vector<int>(4));
    vector<vector<bool>> flag(4, vector<bool>(4));
    for (vector<int> &a : arr) {
        for (int &n : a) {
            cin >> n;
        }
    }

    int direction;
    cin >> direction;
    // Left
    if (direction == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                for (int k = j - 1; k >= 0; k--) {
                    if (flag[i][k]) {
                        break;
                    }

                    if (arr[i][k] == 0) {
                        arr[i][k] = arr[i][k + 1];
                        arr[i][k + 1] = 0;
                        continue;
                    }

                    if (arr[i][k + 1] == arr[i][k]) {
                        arr[i][k] *= 2;
                        arr[i][k + 1] = 0;
                        flag[i][k] = true;
                        break;
                    }
                }
            }
        }
    }

    // up
    if (direction == 1) {
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                for (int k = j - 1; k >= 0; k--) {
                    if (flag[k][i]) {
                        break;
                    }

                    if (arr[k][i] == 0) {
                        arr[k][i] = arr[k + 1][i];
                        arr[k + 1][i] = 0;
                        continue;
                    }

                    if (arr[k + 1][i] == arr[k][i]) {
                        arr[k][i] *= 2;
                        arr[k + 1][i] = 0;
                        flag[k][i] = true;
                        break;
                    }
                }
            }
        }
    }

    // right
    if (direction == 2) {
        for (int i = 0; i < 4; i++) {
            for (int j = 2; j >= 0; j--) {
                for (int k = j + 1; k < 4; k++) {
                    if (flag[i][k]) {
                        break;
                    }

                    if (arr[i][k] == 0) {
                        arr[i][k] = arr[i][k - 1];
                        arr[i][k - 1] = 0;
                        continue;
                    }

                    if (arr[i][k - 1] == arr[i][k]) {
                        arr[i][k] *= 2;
                        arr[i][k - 1] = 0;
                        flag[i][k] = true;
                        break;
                    }
                }
            }
        }
    }

    // down
    if (direction == 3) {
        for (int i = 0; i < 4; i++) {
            for (int j = 2; j >= 0; j--) {
                for (int k = j + 1; k < 4; k++) {
                    if (flag[k][i]) {
                        break;
                    }

                    if (arr[k][i] == 0) {
                        arr[k][i] = arr[k - 1][i];
                        arr[k - 1][i] = 0;
                        continue;
                    }

                    if (arr[k - 1][i] == arr[k][i]) {
                        arr[k][i] *= 2;
                        arr[k - 1][i] = 0;
                        flag[k][i] = true;
                        break;
                    }
                }
            }
        }
    }

    for (vector<int> &a : arr) {
        for (int &n : a) {
            cout << n << " ";
        }
        cout << endl;
    }
}