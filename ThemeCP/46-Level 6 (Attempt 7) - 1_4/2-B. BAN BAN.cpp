#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1747/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = ceil((double) n / 2);
        cout << cnt << endl;
        int l = 1;
        int r = 3 * n;
        while (l < r) {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }
}