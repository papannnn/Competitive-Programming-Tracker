#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1547/A
// O(t)
bool isBetween(int a, int b, int f) {
    return min(a, b) < f && f < max(a, b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int xA, yA, xF, yF, xB, yB;
        // string _;
        // cin >> _;
        cin >> xA >> yA >> xB >> yB >> xF >> yF;
        // cout << xA << endl;
        // cout << yA << endl;
        // cout << xB << endl;
        // cout << yB << endl;
        // cout << xF << endl;
        // cout << yF << endl;
        int res = abs(xA - xB) + abs(yA - yB);
        if ((xA == xB && xA == xF && isBetween(yA, yB, yF)) || (yA == yB && yA == yF && isBetween(xA, xB, xF))) {
            res += 2;
        }
        cout << res << endl;
    }
}