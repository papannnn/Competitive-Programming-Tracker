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
        vector<int> lArr(n);
        vector<int> rArr(n);
        vector<int> flag(2 * n + 1);
        vector<int> single;
        for (int i = 0 ; i < n; i++) {
            int l, r;
            cin >> l >> r;
            int size = r - l + 1;
            if (size == 1 && flag[r] == 0) {
                single.push_back(r);
            }
            if (size == 1) {
                flag[r]++;
            }
            lArr[i] = l;
            rArr[i] = r;
        }
        sort(single.begin(), single.end());
        for (int i = 0 ; i < n; i++) {
            int size = rArr[i] - lArr[i] + 1;
            if (size == 1) {
                cout << (flag[rArr[i]] == 1);
                continue;
            }

            auto it1 = lower_bound(single.begin(), single.end(), lArr[i]);
            auto it2 = upper_bound(single.begin(), single.end(), rArr[i]);
            int cnt = it2 - it1;
            cout << (cnt == size ? 0 : 1);
        }
        cout << endl;
    }
}