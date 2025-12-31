#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1860/A
// (t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.compare("()") == 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        if (s.contains(")(")) {
            for (int i = 0; i < s.length(); i++) {
                cout << '(';
            }

            for (int i = 0; i < s.length(); i++) {
                cout << ')';
            }
            cout << endl;
        } else {
            for (int i = 0; i < s.length(); i++) {
                cout << "()";
            }
            cout << endl;
        }
    }
}