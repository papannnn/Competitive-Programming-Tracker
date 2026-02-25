#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2154/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int x = s.back() == '1' ? k - 1: 0;
        int res = s.back() == '1';
        for (int i = s.length() - 2; i >= 0; i--, x--) {
            // cout << x << " ";
            if (s[i] == '1' && x <= 0) {
                res++;
            }

            if (s[i] == '1') {
                x = k;
            }
        }
        // cout << endl;
        cout << res << endl;
    }
}