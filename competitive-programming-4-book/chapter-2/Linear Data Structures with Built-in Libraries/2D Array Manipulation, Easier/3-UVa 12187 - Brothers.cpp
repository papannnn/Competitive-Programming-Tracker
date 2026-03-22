#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12187
// O(t * r * c * k)
int enemy(int brotherCnt, int you) {
    if (you == 0) {
        return brotherCnt - 1;
    }
    return you - 1;
}

void fight(int brotherCnt, vector<vector<int>> &arr) {
    vector<vector<int>> temp = arr;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            // Up
            if (i != 0 && arr[i - 1][j] == enemy(brotherCnt, arr[i][j])) {
                temp[i][j] = enemy(brotherCnt, arr[i][j]);
                continue;
            }

            // Down
            if (i != arr.size() - 1 && arr[i + 1][j] == enemy(brotherCnt, arr[i][j])) {
                temp[i][j] = enemy(brotherCnt, arr[i][j]);
                continue;
            }

            // Left
            if (j != 0 && arr[i][j - 1] == enemy(brotherCnt, arr[i][j])) {
                temp[i][j] = enemy(brotherCnt, arr[i][j]);
                continue;
            }

            // Right
            if (j != arr[i].size() - 1 && arr[i][j + 1] == enemy(brotherCnt, arr[i][j])) {
                temp[i][j] = enemy(brotherCnt, arr[i][j]);
                continue;
            }
        }
    }
    arr = move(temp);
}

int main () {
    int n, r, c, k;
    while (cin >> n >> r >> c >> k) {
        if (n == 0 && r == 0 && c == 0 && k == 0) {
            break;
        }

        vector<vector<int>> arr(r, vector<int>(c));
        for (vector<int> &a : arr) {
            for (int &num : a) {
                cin >> num;
            }
        }

        while (k--) {
            fight(n, arr);
        }

        for (vector<int> &a : arr) {
            bool first = true;
            for (int &num : a) {
                if (!first) {
                    cout << " ";
                }
                cout << num;
                first = false;
            }
            cout << endl;
        }
    }
}