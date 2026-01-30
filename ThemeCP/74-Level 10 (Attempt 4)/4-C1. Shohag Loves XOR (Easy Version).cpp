#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2039/problem/C1
// O(t * x)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, m;
        cin >> x >> m;
        int curr = 1;
        
        int limit = 1;
        while (limit <= x) {
            limit *= 2;
        }
        limit--;
        // cout << limit << endl;
        int res = 0;
        for (int i = 1 ; i <= limit && i <= m; i++) {
            int val = i ^ x;
            if (i == x) {
                continue;
            }
            if (x % val == 0 || i % val == 0) {
                res++;
            }
        }
        cout << res << endl;
    }
}