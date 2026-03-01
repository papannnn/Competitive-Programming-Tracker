#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/F
// O(t * n log n + m)

struct Reactor {
    long long x;
    long long y;
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        unordered_map<int, vector<Reactor>> mapping;
        for (int i = 0 ; i < n; i++) {
            Reactor r;
            cin >> r.x >> r.y;
            mapping[r.y].push_back(r);
        }

        vector<long long> precompute(n + 1);
        priority_queue<int, vector<int>, greater<int>> pq;
        long long sum = 0;
        long long maxVal = 0;
        for (int i = n; i >= 0; i--) {
            for (int j = 0; j < mapping[i].size(); j++) {
                while (pq.size() > i) {
                    sum -= pq.top();
                    pq.pop();
                }
                sum += mapping[i][j].x;
                pq.push(mapping[i][j].x);
                maxVal = max(maxVal, sum);
                
            }
            if (pq.size() == i + 1) {
                sum -= pq.top();
                pq.pop();
            }
            precompute[i] = sum;
        }

        for (int i = 1; i < precompute.size(); i++) {
            precompute[i] = max(precompute[i], precompute[i - 1]);
        }

        for (int i = 0 ; i < m; i++) {
            Reactor r;
            cin >> r.x >> r.y;
            cout << max(maxVal, precompute[r.y] + r.x) << " ";
        }

        cout << endl;
    }
}