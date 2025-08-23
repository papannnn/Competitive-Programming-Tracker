#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1660/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int one, two;
        cin >> one >> two;
        if (one == 0) {
            cout << 1 << endl;
            continue;
        }

        if (two == 0) {
            cout << one + 1 << endl;
            continue;
        }

        cout << one + 2 * two + 1 << endl;
    }
}