#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2007/A
// O(t * r)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        if (l % 2 == 0) {
            l++;
        }

        int res = 0;
        for (int i = l; i + 2 <= r; i += 4) {
            res++;
        }
        // int res = ceil((double) (r - l + 1) / 4);
        cout << res << endl;
    }
}