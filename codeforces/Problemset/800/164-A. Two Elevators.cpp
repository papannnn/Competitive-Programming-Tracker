#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1729/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(1 - a);
        int second = c <= b ? abs(1 - b) : abs(b - c) + abs(1 - c);
        if (first < second) {
            cout << 1 << endl;
        } else if (first > second) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
}