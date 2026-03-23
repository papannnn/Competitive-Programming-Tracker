#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/nineknights
// O(1)
int main () {
    vector<vector<char>> arr(6, vector<char>(6));
    for (int i = 1 ; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> arr[i][j];
        }
    }

    bool valid = true;
    int cnt = 0;
    for (int i = 1 ; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (arr[i][j] != 'k') {
                continue;
            }
            cnt++;
            if (i >= 2 && j >= 3) {
                valid &= arr[i - 1][j - 2] != 'k';
            }

            if (i >= 2 && j <= 3) {
                valid &= arr[i - 1][j + 2] != 'k';
            }

            if (i >= 3 && j >= 2) {
                valid &= arr[i - 2][j - 1] != 'k';
            }

            if (i >= 3 && j <= 4) {
                valid &= arr[i - 2][j + 1] != 'k';
            }

            if (i <= 4 && j >= 3) {
                valid &= arr[i + 1][j - 2] != 'k';
            }

            if (i <= 4 && j <= 3) {
                valid &= arr[i + 1][j + 2] != 'k';
            }

            if (i <= 3 && j >= 2) {
                valid &= arr[i + 2][j - 1] != 'k';
            }

            if (i <= 3 && j <= 4) {
                valid &= arr[i + 2][j + 1] != 'k';
            }
        }
    }
    cout << (valid && cnt == 9 ? "valid" : "invalid");
}