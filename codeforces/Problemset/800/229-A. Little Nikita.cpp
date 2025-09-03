#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1977/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n < m) {
            cout << "No" << endl;
            continue;
        }

        if (n % 2 == m % 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}