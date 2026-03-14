#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-10813
bool checkBingo(vector<vector<bool>> &flag) {
    for (int i = 0; i < 5; i++) {
        bool valid = true;
        for (int j = 0; j < 5; j++) {
            if (!flag[i][j]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            return true;
        }

        valid = true;
        for (int j = 0; j < 5; j++) {
            if (!flag[j][i]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return true;
        }
    }

    bool valid = true;
    for (int i = 0; i < 5; i++) {
        if (!flag[i][i]) {
            valid = false;
            break;
        }
    }

    if (valid) {
        return true;
    }

    valid = true;
    for (int i = 0; i < 5; i++) {
        if (!flag[4 - i][i]) {
            valid = false;
            break;
        }
    }
    if (valid) {
        return true;
    }

    return false;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<bool>> flag(5, vector<bool> (5)); 
        unordered_map<int, pair<int, int>> loc;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == 2 && j == 2) {
                    flag[i][j] = true;
                    continue;
                }

                int pos;
                cin >> pos;
                loc[pos] = make_pair(i, j);
            }
        }

        int cnt = 1;
        int res = 99;
        for (int i = 0; i < 75; i++) {
            int pos;
            cin >> pos;
            if (loc.find(pos) != loc.end()) {
                flag[loc[pos].first][loc[pos].second] = true;
                if (checkBingo(flag)) {
                    res = min(res, cnt);
                }
            }
            cnt++;
        }
        cout << "BINGO after " << res << " numbers announced" << endl;
    }
}