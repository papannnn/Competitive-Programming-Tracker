#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2039/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.length() == 1) {
            cout << -1 << endl;
            continue;
        }

        if (s.length() == 2) {
            if (s[0] == s[1]) {
                cout << s << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }

        bool valid = false;
        for (int i = 0 ; i < s.length() - 2; i++) {
            if (s[i] == s[i + 1]) {
                cout << s[i] << s[i + 1];
                valid = true;
                break;
            } else if (s[i + 1] == s[i + 2]) {
                cout << s[i + 1] << s[i + 2];
                valid = true;
                break;
            } else if (s[i] == s[i + 2]) {
                continue;
            } else {
                cout << s[i] << s[i + 1] << s[i + 2];
                valid = true;
                break;
            }
        }

        if (!valid) {
            cout << -1;
        }
        cout << endl;
    }
}