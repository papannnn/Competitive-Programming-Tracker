#include <bits/stdc++.h>

using namespace std;
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1;
        cin >> x1 >> y1;

        int x2, y2;
        cin >> x2 >> y2;

        int x3, y3;
        cin >> x3 >> y3;
        int res = 0;
        res += abs(x1 - x2);
        res += abs(y1 - y2);

        int maxX = max(x1, x2);
        int minX = min(x1, x2);
        int maxY = max(y1, y2);
        int minY = min(y1, y2);
        if ((x1 == x2 && x1 == x3 && minY < y3 && y3 < maxY) || (y1 == y2 && y1 == y3 && minX < x3 && x3 < maxX)) {
            res += 2;
        }
        cout << res << endl;
    }
}