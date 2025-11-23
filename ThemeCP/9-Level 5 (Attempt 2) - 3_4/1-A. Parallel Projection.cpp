#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1781/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int w, d, h;
        cin >> w >> d >> h;
        int a, b, f, g;
        cin >> a >> b >> f >> g;

        int res1 = a + h + f + abs(b - g);
        int res2 = abs(a - w) + h + abs(f - w) + abs(b - g);
        int res3 = b + h + g + abs(a - f);
        int res4 = abs(b - d) + h + abs(g - d) + abs(a - f);
        
        int res = min(res1, min(res2, min(res3, res4)));
        cout << res << endl;
    }
}