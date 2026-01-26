#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1374/problem/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        int res = 0;
        int cnt = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == ')') {
                cnt++;
            } else {
                cnt--;
            }
            res = max(res, cnt);
        }
        cout << res << endl;
    }
}

// )))())((((