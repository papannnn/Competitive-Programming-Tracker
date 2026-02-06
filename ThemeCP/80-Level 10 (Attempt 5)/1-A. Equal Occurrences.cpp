#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2146/A
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

        unordered_map<int, int> cntMapping;
        for (auto &m : mapping) {
            int x = m.second;
            while (x) {
                cntMapping[x]++;
                x--;
            }
        }

        int res = 0;
        for (auto &m : cntMapping) {
            res = max(res, m.first * m.second);
        }
        cout << res << endl;
    }
}