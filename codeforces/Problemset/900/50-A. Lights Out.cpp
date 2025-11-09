#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/275/A
// O(1)
int main () {
    vector<vector<int>> arr;
    vector<vector<int>> state = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };
    for (int i = 0 ; i < 3; i++) {
        vector<int> temp(3);
        for (int &num : temp) {
            cin >> num;
        }
        arr.push_back(temp);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                continue;
            }
            
            state[i][j] = !state[i][j];

            if (i - 1 >= 0) {
                state[i - 1][j] = !state[i - 1][j];
            }

            if (j - 1 >= 0) {
                state[i][j - 1] = !state[i][j - 1];
            }

            if (i + 1 < arr.size()) {
                state[i + 1][j] = !state[i + 1][j];
            }

            if (j + 1 < arr.size()) {
                state[i][j + 1] = !state[i][j + 1];
            }
        }
    }

    for (int i = 0 ; i < 3; i++) {
        for (int &num : state[i]) {
            cout << num;
        }
        cout << endl;
    }
}