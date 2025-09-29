#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2050/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int res = 0;
        while (n--) {
            string s;
            cin >> s;
            m -= s.length();
            if (m >= 0) {
                res++;
            }
        }
        cout << res << endl;
    }
}