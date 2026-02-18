#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2053/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<pair<int, int>, int> mapping;
        vector<pair<int, int>> arr;
        set<int> single;
        for (int i = 0 ; i < n; i++) {
            int l, r;
            cin >> l >> r;
            int size = r - l + 1;
            if (size == 1) {
                single.insert(l);
            }
            auto p = make_pair(l, r);
            arr.push_back(p);
            mapping[p]++;
        }

        vector<int> singleArr;
        for (auto &n : single) {
            singleArr.push_back(n);
        }
        sort(singleArr.begin(), singleArr.end());
        for (int i = 0 ; i < arr.size(); i++) {
            int size = arr[i].second - arr[i].first + 1;
            if (size == 1) {
                if (mapping[arr[i]] == 1) {
                    cout << 1;
                } else {
                    cout << 0;
                }
                continue;
            }

            auto it1 = lower_bound(singleArr.begin(), singleArr.end(), arr[i].first);
            auto it2 = upper_bound(singleArr.begin(), singleArr.end(), arr[i].second);
            int count = it2 - it1;
            if (count == size) {
                cout << 0;
            } else {
                cout << 1;
            }
        }
        cout << endl;
    }
}