#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2025/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        int connect = 0;
        for (int i = 0 ; i < max(s1.length(), s2.length()); i++) {
            if (i == s1.length() || i == s2.length()) {
                break;
            }

            if (s1[i] != s2[i]) {
                break;
            }

            connect++;
        }

        if (connect == 0) {
            cout << s1.length() + s2.length() << endl;
        } else {
            cout << connect + 1 + (s1.length() - connect) + (s2.length() - connect) << endl;
        }
    }
}