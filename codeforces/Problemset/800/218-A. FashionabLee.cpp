#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1369/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n % 4 ? "NO" : "YES") << endl;
    }
}