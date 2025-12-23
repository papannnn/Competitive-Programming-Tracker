#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2167/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool valid = a == b && a == c && a == d;
        cout << (valid ? "YES" : "NO") << endl;
    }
}