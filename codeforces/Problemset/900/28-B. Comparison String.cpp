#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1837/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        int ptr = 0;
        int res = 1;
        while (ptr < s.length()) {
            char c = s[ptr];
            ptr++;
            int cnt = 1;
            while (ptr < s.length() && s[ptr] == c) {
                ptr++;
                cnt++;
                res = max(cnt, res);
            }
        }
        cout << res + 1 << endl;
    }
}