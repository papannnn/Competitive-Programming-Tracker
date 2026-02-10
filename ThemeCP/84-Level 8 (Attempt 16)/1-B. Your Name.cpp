#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2167/B
// O(t * s log s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        cout << (s1.compare(s2) == 0 ? "YES" : "NO") << endl;
    }
}