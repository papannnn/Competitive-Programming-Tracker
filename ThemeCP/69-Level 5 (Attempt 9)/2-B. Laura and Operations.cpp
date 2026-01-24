#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1900/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int odd = 0;
        int even = 0;
        odd += a % 2 == 1;
        odd += b % 2 == 1;
        odd += c % 2 == 1;
        even += a % 2 == 0;
        even += b % 2 == 0;
        even += c % 2 == 0;

        if (odd == 3 || even == 3) {
            cout << "1 1 1" << endl;
            continue;
        }

        if (odd == 2) {
            if (a % 2 == 0) {
                cout << "1 0 0" << endl;
            } else if (b % 2 == 0) {
                cout << "0 1 0" << endl;
            } else {
                cout << "0 0 1" << endl;
            }
        } else {
            if (a % 2 == 1) {
                cout << "1 0 0" << endl;
            } else if (b % 2 == 1) {
                cout << "0 1 0" << endl;
            } else {
                cout << "0 0 1" << endl;
            }
        }
    }
}