#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1765/E
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a > b) {
            cout << 1 << endl;
            continue;
        }

        int res = ceil((double) n / a);
        cout << res << endl;
    }
}