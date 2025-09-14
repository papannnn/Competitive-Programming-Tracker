#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2091/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        // 01.03.2025
        unordered_map<int, int> mapping;
        mapping[0] = 3;
        mapping[1] = 1;
        mapping[2] = 2;
        mapping[3] = 1;
        mapping[5] = 1;
        int cnt = 8;
        int n;
        cin >> n;
        int res = 0;
        for (int i = 1; i <= n; i++) {
            int num;
            cin >> num;
            if (mapping[num] > 0) {
                cnt--;
                mapping[num]--;
                if (cnt == 0) {
                    res = i;
                }
            }
        }
        cout << res << endl;
    }
}