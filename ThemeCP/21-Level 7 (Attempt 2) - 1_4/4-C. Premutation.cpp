#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1790/C
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0 ; i < n; i++) {
            vector<int> temp;
            for (int j = 0 ; j < n - 1; j++) {
                int num;
                cin >> num;
                temp.push_back(num);
            }
            arr.push_back(temp);
        }

        unordered_map<int, int> mapping;
        for (int i = 0 ; i < arr.size(); i++) {
            mapping[arr[i][0]]++;
        }

        int head = -1;
        int anomaly = -1;
        for (auto &m : mapping) {
            if (m.second == 1) {
                anomaly = m.first;
            } else {
                head = m.first;
            }
        }
        cout << head << " ";
        int idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i][0] == anomaly) {
                for (int j = 0 ; j < arr[i].size(); j++) {
                    cout << arr[i][j] << " ";
                }
                break;
            }
        }
        cout << endl;
    }
}