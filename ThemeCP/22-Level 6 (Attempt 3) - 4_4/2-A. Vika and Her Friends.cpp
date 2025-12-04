#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1848/A
// O(t * k)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int vx, vy;
        cin >> vx >> vy;

        bool valid = false;
        for (int i = 0 ; i < k ; i++) {
            int x, y;
            cin >> x >> y;
            int diffX = abs(vx - x);
            int diffY = abs(vy - y);
            if ((diffX + diffY) % 2 == 0) {
                valid = true;
            }
        }
        cout << (valid ? "NO" : "YES") << endl;
    }
}