#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2003/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        cout << (s[0] != s[s.length() - 1] ? "YES" : "NO") << endl;
    }
}