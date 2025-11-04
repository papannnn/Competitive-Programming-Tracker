#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1624/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool valid = false;
        int diff1 = a - b;
        valid |= (b + diff1 * -1) % c == 0 && (b + diff1 * -1) >= c;

        int diff2 = abs(a - c);
        valid |= (diff2 % 2 == 0) && (max(a, c) - diff2 / 2) % b == 0 && (max(a, c) - diff2 / 2) >= b;

        int diff3 = b - c;
        valid |= (b + diff3) % a == 0 && (b + diff3) >= a;
        cout << (valid ? "YES" : "NO") << endl;
    }
}