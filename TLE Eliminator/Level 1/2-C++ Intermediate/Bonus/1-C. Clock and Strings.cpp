#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1971/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        if (x1 > x2) {
            swap(x1, x2);
        }

        if (y1 > y2) {
            swap(y1, y2);
        }

        int ptr = x1;
        bool valid1 = false;
        while (ptr != x2) {
            valid1 |= ptr == y1 || ptr == y2;
            ptr--;
            if (ptr == 0) {
                ptr = 12;
            }
        }

        ptr = x1;
        bool valid2 = false;
        while (ptr != x2) {
            valid2 |= ptr == y1 || ptr == y2;
            ptr++;
            if (ptr == 13) {
                ptr = 1;
            }
        }

        cout << (valid1 && valid2 ? "YES" : "NO") << endl;
    }
}