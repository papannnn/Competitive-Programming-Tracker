#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1413/problem/B
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr1;
        for (int i = 0 ; i < n; i++) {
            vector<int> temp;
            for (int j = 0 ; j < m; j++) {
                int val;
                cin >> val;
                temp.push_back(val);
            }
            arr1.push_back(temp);
        }

        vector<vector<int>> arr2;
        unordered_map<int, int> posMapping;
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                int val;
                cin >> val;
                posMapping[val] = i;
                temp.push_back(val);
            }
            arr2.push_back(temp);
        }

        // for (auto &m : posMapping) {
        //     cout << "Key: " << m.first << " val: " << m.second << endl;
        // }

        for (int i = 0 ; i < m; i++) {
            int pos = posMapping[arr1[0][i]];
            for (int j = 0 ; j < n; j++) {
                arr1[j][i] = arr2[pos][j];
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
    }
}