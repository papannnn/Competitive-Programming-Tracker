#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2157/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> mapping;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            mapping[num]++;
        }

        int res = 0;
        for (auto &m : mapping) {
            if (m.second > m.first) {
                res += m.second - m.first;
                continue;
            }

            if (m.second < m.first) {
                res += m.second;
            }
        }
        cout << res << endl;
    }
}