#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2072/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        double n, k, p;
        cin >> n >> k >> p;
        k = abs(k);
        
        if (k > n * p) {
            cout << -1 << endl;
            continue;
        }

        int res = ceil(k / p);
        cout << res << endl;
    }
}