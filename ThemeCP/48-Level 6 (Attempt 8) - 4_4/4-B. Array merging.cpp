#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1831/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        unordered_map<int, int> mapping1;
        unordered_map<int, int> mapping2;
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        int ptr = 0;
        while (ptr < arr1.size()) {
            int val = arr1[ptr];
            int cnt = 1;
            ptr++;
            while (ptr < arr1.size() && arr1[ptr] == val) {
                cnt++;
                ptr++;
            }
            mapping1[val] = max(mapping1[val], cnt);
        }

        ptr = 0;
        while (ptr < arr2.size()) {
            int val = arr2[ptr];
            int cnt = 1;
            ptr++;
            while (ptr < arr2.size() && arr2[ptr] == val) {
                cnt++;
                ptr++;
            }
            mapping2[val] = max(mapping2[val], cnt);
        }

        int res = 0;
        for (int i = 0 ; i < arr1.size() ; i++) {
            res = max(res, mapping1[arr1[i]] + mapping2[arr1[i]]);
            res = max(res, mapping1[arr2[i]] + mapping2[arr2[i]]);
        }
        cout << res << endl;
    }
}
