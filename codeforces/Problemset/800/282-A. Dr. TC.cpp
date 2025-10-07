#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2106/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int oneCnt = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                oneCnt++;
            }
        }

        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                res += oneCnt - 1;
            } else {
                res += oneCnt + 1;
            }
        }
        cout << res << endl;
    }
}