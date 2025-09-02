#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1560/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int gap = abs(a - b);
        int size = gap * 2;
        
        if (a > size || b > size || c > size) {
            cout << -1 << endl;
            continue;
        }

        if (c + gap > size && c - gap <= 0) {
            cout << -1 << endl;
            continue;
        }
        int res;
        if (c + gap > size) {
            res = c - gap;
        } else {
            res = c + gap;
        }
        cout << res << endl;
    }
}