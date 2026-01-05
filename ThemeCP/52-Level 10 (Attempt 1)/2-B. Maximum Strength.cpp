#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1834/B
// O(t * max(l, r))
int main () {
    int t;
    cin >> t;
    while (t--) {
        string l, r;
        cin >> l >> r;

        while (l.size() < r.size()) {
            l = '0' + l;
        }
        
        bool flag = false;
        long long res = 0;
        for (int i = 0; i < l.size(); i++) {
            if (!flag) {
                if (l[i] == r[i]) {
                    continue;
                }

                res += r[i] - l[i];
                flag = true;
            } else {
                res += 9;
            }
        }

        cout << res << endl;
    }
}