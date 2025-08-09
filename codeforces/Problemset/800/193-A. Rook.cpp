#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1907/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 1; i <= 8; i++) {
            char num = '0' + i;
            char c = s[0];
            if (c != s[0] || num != s[1]) {
                cout << c << num << endl;
            }
        }

        for (int i = 0; i < 8; i++) {
            char num = s[1];
            char c = 'a' + i;
            if (c != s[0] || num != s[1]) {
                cout << c << num << endl;
            }
        }
    }
}