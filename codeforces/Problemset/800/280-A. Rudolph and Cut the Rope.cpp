#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1846/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        while (n--) {
            int l, r;
            cin >> l >> r;
            if (l > r) {
                res++;
            }
        }
        cout << res << endl;
    }
}