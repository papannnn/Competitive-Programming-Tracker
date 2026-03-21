#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11222
// O(t * m)
int main () {
    int t;
    cin >> t;
    int c = 1;
    while (t--) {
        vector<vector<int>> arr;
        for (int i = 0 ; i < 3; i++) {
            int n;
            cin >> n;
            vector<int> temp;
            for (int j = 0 ; j < n; j++) {
                int val;
                cin >> val;
                temp.push_back(val);
            }
            sort(temp.begin(), temp.end());
            arr.push_back(temp);
        }

        vector<vector<int>> res(3);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                if (j != 0 && arr[i][j] == arr[i][j - 1]) {
                    continue;
                }

                bool unique = true;
                for (int k = 0; k < 3; k++) {
                    if (k == i) {
                        continue;
                    }
                    auto it = find(arr[k].begin(), arr[k].end(), arr[i][j]);
                    unique &= it == arr[k].end();
                }
                
                if (unique) {
                    res[i].push_back(arr[i][j]);
                }
            }
        }

        vector<int> idx;
        int maxVal = 0;
        for (int i = 0; i < 3; i++) {
            if (res[i].size() == maxVal) {
                idx.push_back(i);
            } else if (res[i].size() > maxVal) {
                maxVal = res[i].size();
                idx.clear();
                idx.push_back(i);
            }
        }

        cout << "Case #" << c++ << ":" << endl;
        for (int i = 0 ; i < idx.size(); i++) {
            cout << idx[i] + 1 << " ";
            if (res[idx[i]].size() == 0) {
                cout << res[idx[i]].size();
            } else {
                cout << res[idx[i]].size() << " ";
            }
            
            bool first = true;
            for (int j = 0; j < res[idx[i]].size(); j++) {
                if (!first) {
                    cout << " ";
                }
                cout << res[idx[i]][j];
                first = false;
            }

            cout << endl;
        }
    }
}