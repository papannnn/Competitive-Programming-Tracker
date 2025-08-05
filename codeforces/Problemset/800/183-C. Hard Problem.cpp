#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2044/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int slot = m * 2;
        slot -= min(m, a);
        slot -= min(m, b);
        slot -= min(slot, c);
        cout << abs(slot - m * 2) << endl;
    }
}