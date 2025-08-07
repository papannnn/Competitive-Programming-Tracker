#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1890/A
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

        if (mapping.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        if (mapping.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        int val[] = {0, 0};
        int idx = 0;
        for (auto m : mapping) {
            val[idx++] = m.second;
        }

        cout << (abs(val[0] - val[1]) > 1 ? "No" : "Yes") << endl;
    }
}