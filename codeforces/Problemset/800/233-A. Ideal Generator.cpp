#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2093/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}