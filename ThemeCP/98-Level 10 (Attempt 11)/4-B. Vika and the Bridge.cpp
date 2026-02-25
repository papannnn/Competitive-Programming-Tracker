#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1848/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        if (k == 1) {
            cout << 0 << endl;
            continue;
        }

        unordered_map<int, vector<int>> mapping;
        for (int i = 1; i <= k; i++) {
            mapping[i].push_back(0);
        }

        for (int i = 1; i <= n; i++) {
            mapping[arr[i]].push_back(i);
        }

        for (int i = 1; i <= k; i++) {
            mapping[i].push_back(n + 1);
        }

        int res = 1e9;
        for (auto &m : mapping) {
            priority_queue<int> dist;
            for (int i = 0; i < m.second.size() - 1; i++) {
                dist.push(m.second[i + 1] - m.second[i] - 1);
            }

            int maxDist = dist.top();
            dist.pop();
            if (maxDist % 2) {
                dist.push(maxDist / 2);
                dist.push((maxDist / 2) - 1);
            } else {
                dist.push(maxDist / 2);
                dist.push(maxDist / 2);
            }
            res = min(res, dist.top());
        }
        cout << res << endl;
    }
}