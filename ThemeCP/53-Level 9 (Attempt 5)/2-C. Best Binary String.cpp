#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1837/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '?') {
                if (i == 0 || s[i - 1] == '0') {
                    s[i] = '0';
                } else {
                    s[i] = '1';
                }
            }
        }
        cout << s << endl;
    }
}