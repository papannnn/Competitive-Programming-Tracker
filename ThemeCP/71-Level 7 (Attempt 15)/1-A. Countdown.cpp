#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1573/problem/A
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
        for (int i = s.length() - 2; i >= 0; i--) {
            if (s[i] - '0') {
                res++;
                res += s[i] - '0';
            }
        }

        res += s.back() - '0';
        cout << res << endl;
    }
}