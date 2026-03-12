#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1426/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        bool valid = false;
        while (n--) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b == c) {
                valid = true;
            }
        }

        valid &= m % 2 == 0;
        cout << (valid ? "YES" : "NO") << endl;
    }
}