#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1974/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int screen = ceil((double) y / 2);
        int slot = screen * 15 - 4 * y;
        x -= slot;
        if (x > 0) {
            screen += ceil((double) x / 15);
        }
        cout << screen << endl;
    }
}