#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1691/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        if (arr.size() == 1) {
            cout << -1 << endl;
            continue;
        }

        unordered_map<int, deque<int>> mapping;
        for (int i = 0; i < arr.size(); i++) {
            mapping[arr[i]].push_front(i + 1);
        }

        vector<int> res;
        bool valid = true;
        for (int i = 0; i < arr.size(); i++) {
            bool tempValid = false;
            // deque<int> tempDeque = mapping[arr[i]];
            if (mapping[arr[i]][0] != i + 1) {
                tempValid = true;
                res.push_back(mapping[arr[i]][0]);
                mapping[arr[i]].pop_front();
            } else if (mapping[arr[i]][mapping[arr[i]].size() - 1] != i + 1) {
                tempValid = true;
                res.push_back(mapping[arr[i]][mapping[arr[i]].size() - 1]);
                mapping[arr[i]].pop_back();
            }

            if (!tempValid) {
                valid = false;
                break;
            }
        }

        if (valid) {
            for (int &num : res) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}