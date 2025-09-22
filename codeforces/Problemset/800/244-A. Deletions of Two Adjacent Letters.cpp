#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1650/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool valid = false;
        for (int i = 0 ; i < s.length(); i++) {
            if (i % 2 == 0 && s[i] == c) {
                valid = true;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}