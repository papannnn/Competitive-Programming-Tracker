#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2062/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                res++;
            }
        }
        cout << res << endl;
    }
}