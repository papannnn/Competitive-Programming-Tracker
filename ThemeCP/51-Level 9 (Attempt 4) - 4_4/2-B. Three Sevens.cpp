#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1798/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;

        deque<vector<int>> arr;
        for (int i = 0; i < m; i++) {
            int n;
            cin >> n;
            vector<int> temp(n);
            for (int &num : temp) {
                cin >> num;
            }
            arr.push_front(temp);
        }

        unordered_set<int> prev;
        bool valid = true;
        deque<int> res;
        for (int i = 0 ; i < m; i++) {
            unordered_set<int> curr;
            int prevSize = prev.size();
            bool flag = false;
            for (int j = 0 ; j < arr[i].size(); j++) {
                int val = arr[i][j];
                curr.insert(val);
                if (!flag && prev.find(val) == prev.end()) {
                    flag = true;
                    res.push_front(val);
                }
            }
            prev.merge(curr);
            valid &= prev.size() != prevSize;
        }

        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < res.size(); i++) {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
}