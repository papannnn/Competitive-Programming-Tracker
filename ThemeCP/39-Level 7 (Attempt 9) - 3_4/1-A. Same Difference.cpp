#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2166/A
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
        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] != s[s.length() - 1]) {
                res++;
            }
        }
        cout << res << endl;
    }
}