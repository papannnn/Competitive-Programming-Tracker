#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1858/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            cout << "First" << endl;
        } else if (b > a) {
            cout << "Second" << endl;
        } else {
            if (c % 2 == 0) {
                cout << "Second" << endl;
            } else {
                cout << "First" << endl;
            }
        }
    }
}