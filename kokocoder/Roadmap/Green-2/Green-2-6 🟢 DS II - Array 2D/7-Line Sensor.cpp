#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    vector<int> res(m);
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '#') {
                res[j]++;
            }
        }
    }
    for (int &num : res) {
        cout << num << " ";
    }
    cout << endl;
}