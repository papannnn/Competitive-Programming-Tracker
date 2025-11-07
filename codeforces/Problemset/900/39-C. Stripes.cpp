#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1742/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        getchar();

        vector<string> arr(8);
        for (string &s : arr) {
            cin >> s;
            // cout << s << endl;
        }
        // cout << endl;

        bool flag = false;
        for (int i = 0 ; i < 8; i++) {
            if (arr[i][0] != 'R') {
                continue;
            }
            
            bool validR = true;
            for (int j = 0 ; j < 8; j++) {
                if (arr[i][j] != 'R') {
                    validR = false;
                    break;
                }
            }

            if (validR) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "R" << endl;
        } else {
            cout << "B" << endl;
        }
    }
}