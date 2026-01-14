#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2030/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        if (s[0] == '1' || s[s.length() - 1] == '1') {
            cout << "YES" << endl;
            continue;
        }

        bool valid = false;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '1' && s[i - 1] == '1') {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}