#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1873/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ptr = 0;
        int res = 0;
        while (ptr < n) {
            if (s[ptr] == 'B') {
                res++;
                ptr += k;
            } else {
                ptr++;
            }
        }
        cout << res << endl;
    }
}