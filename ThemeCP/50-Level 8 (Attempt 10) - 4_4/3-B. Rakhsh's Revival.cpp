#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2034/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int ptr = 0;
        int res = 0;
        int cnt = 0;
        while (ptr < s.length()) {
            if (s[ptr] == '1') {
                if (cnt < 0) {
                    cnt++;
                }
                ptr++;
                continue;
            }

            while (ptr < s.length() && s[ptr] == '0') {
                cnt++;
                if (cnt == m) {
                    cnt = -(k - 1);
                    res++;
                }
                ptr++;
            }

            if (cnt > 0 && cnt < m) {
                cnt = 0;
            }
        }
        cout << res << endl;
    }
}