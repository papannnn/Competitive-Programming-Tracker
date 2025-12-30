#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1927/C
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        unordered_set<int> flag1;
        unordered_set<int> flag2;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            flag1.insert(num);
        }

        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            flag2.insert(num);
        }

        int cnt1 = k / 2;
        int cnt2 = k / 2;
        bool valid = true;
        for (int i = 1; i <= k; i++) {
            if (flag1.find(i) == flag1.end() && flag2.find(i) == flag2.end()) {
                valid = false;
                break;
            }

            if (flag1.find(i) != flag1.end() && flag2.find(i) != flag2.end()) continue;
            if (flag1.find(i) != flag1.end() && flag2.find(i) == flag2.end()) {
                cnt1--;
            }
            if (flag1.find(i) == flag1.end() && flag2.find(i) != flag2.end()) {
                cnt2--;
            }
        }

        valid &= cnt1 >= 0;
        valid &= cnt2 >= 0;
        cout << (valid ? "YES" : "NO") << endl;
    }
}