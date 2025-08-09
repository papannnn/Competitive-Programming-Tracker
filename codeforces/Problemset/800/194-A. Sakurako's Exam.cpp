#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2008/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int one, two;
        cin >> one >> two;
        if (one % 2) {
            cout << "NO" << endl;
            continue;
        }

        if (two == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (two % 2 && one == 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}