#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1395/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        int odd1 = 0;
        odd1 += r % 2;
        odd1 += g % 2;
        odd1 += b % 2;
        odd1 += w % 2;

        if (r > 0 && g > 0 && b > 0) {
            r--;
            g--;
            b--;
            w += 3;
        }
        int odd2 = 0;
        odd2 += r % 2;
        odd2 += g % 2;
        odd2 += b % 2;
        odd2 += w % 2;
        cout << (odd1 <= 1 || odd2 <= 1 ? "Yes" : "No") << endl;
    }
}
