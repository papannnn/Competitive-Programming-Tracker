#include <bits/stdc++.h>

using namespace std;
void f(int n, vector<vector<char>> &res, int y, int x) {
    if (n == 1) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 1 && j == 1) {
                    res[y + i][x + j] = '.';
                } else {
                    res[y + i][x + j] = '#';
                }
            }
        }
        return;
    }

    int size = pow(3, n);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                for (int k = 0; k < size / 3; k++) {
                    for (int l = 0; l < size / 3; l++) {
                        res[y + k + i * (size / 3)][x + l + j * (size / 3)] = '.';
                    }
                }
            } else {
                f(n - 1, res, y + i * (size / 3), x + j * (size / 3));
            }
        }
    }
}

int main () {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "#";
        return 0;
    }
    int size = pow(3, n);
    vector<vector<char>> res(size, vector<char>(size, ' '));
    f(n, res, 0, 0);
    for (vector<char> &a : res) {
        for (char &c : a) {
            cout << c;
        }
        cout << endl;
    }
}