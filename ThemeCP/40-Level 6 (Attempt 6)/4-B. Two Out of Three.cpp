#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1894/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        if (mapping.size() == 1) {
            cout << -1 << endl;
            continue;
        } 

        int cnt = 0;
        vector<int> head;
        vector<int> foundHead = {0, 0};
        vector<int> headVal = {3, 2};
        int curr = 0;
        for (auto &m : mapping) {
            if (curr == 2) {
                break;
            }
            cnt += m.second / 2;
            if (m.second / 2) {
                head.push_back(m.first);
                curr++;
            }
        }

        if (head.size() < 2) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            if (head[0] == arr[i]) {
                cout << headVal[0] - foundHead[0] << " ";
                foundHead[0] = 1;
                continue;
            }

            if (head[1] == arr[i]) {
                cout << headVal[1] - foundHead[1] << " ";
                foundHead[1] = 1;
                continue;
            }
            cout << 1 << " ";
        }
        cout << endl;
    }
}

// 7 7 7 7
// 1 2 3