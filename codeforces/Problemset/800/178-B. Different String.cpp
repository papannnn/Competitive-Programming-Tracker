#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1971/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] != s[i + 1]) {
                swap(s[i], s[i + 1]);
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
        if (found) {
            cout << s << endl;
        }
    }
}