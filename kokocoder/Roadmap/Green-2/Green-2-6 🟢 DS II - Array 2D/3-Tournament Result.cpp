#include <bits/stdc++.h>

using namespace std;
// O(n ^ 2)
int main () {
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    for (vector<char> &s : arr) {
        for (char &c : s) {
            cin >> c;
        }
    }

    bool valid = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            
            if (arr[i][j] == 'W') {
                valid &= arr[j][i] == 'L';
            } else if (arr[i][j] == 'L') {
                valid &= arr[j][i] == 'W';
            } else if (arr[i][j] == 'D'){
                valid &= arr[j][i] == 'D';
            }
        }
    }
    cout << (valid ? "correct" : "incorrect") << endl;
}