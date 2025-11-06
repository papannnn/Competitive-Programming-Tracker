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
        
        int ptr1 = x1;
        bool found1 = false;
        while (ptr1 != x2) {
            ptr1++;
            if (ptr1 == 13) {
                ptr1 = 1;
            }
            found1 |= ptr1 == y1 || ptr1 == y2;
        }

        ptr1 = x1;
        bool found2 = false;
        while (ptr1 != x2) {
            ptr1--;
            if (ptr1 == 0) {
                ptr1 = 12;
            }
            found2 |= ptr1 == y1 || ptr1 == y2;
        }
        cout << (found1 && found2 ? "YES" : "NO") << endl;
    }
}