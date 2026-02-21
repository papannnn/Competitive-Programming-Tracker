#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2171/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) {
            cout << 0 << endl;
            continue;
        }

        cout << n / 4 + 1 << endl;
    }
}