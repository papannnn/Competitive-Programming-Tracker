#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1957/A
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

        int res = 0;
        for (auto &m : mapping) {
            res += m.second / 3;
        }
        cout << res << endl;
    }
}