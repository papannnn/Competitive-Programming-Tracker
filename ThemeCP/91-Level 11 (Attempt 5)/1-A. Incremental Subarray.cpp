#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2151/A
// O(t * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(m);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        bool one = !is_sorted(arr.begin(), arr.end());
        for (auto &m : mapping) {
            if (m.second > 1) {
                one = true;
                break;
            }
        }

        if (one) {
            cout << 1 << endl;
            continue;
        }

        cout << n - arr.back() + 1 << endl;
    }
}