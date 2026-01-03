#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1796/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        string fb = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
        cout << (fb.contains(s) ? "YES" : "NO") << endl;
    }
}
// 21 
// FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB