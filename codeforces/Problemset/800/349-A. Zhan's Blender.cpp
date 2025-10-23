#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2013/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int res = ceil((double) n / min(x, y));
        cout << res << endl;
    }
}