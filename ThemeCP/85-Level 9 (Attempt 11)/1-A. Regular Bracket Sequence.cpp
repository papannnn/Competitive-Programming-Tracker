#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1469/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int posOpen = -1;
        int posClose = -1;
        int question = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == ')') {
                posClose = i;
            }

            if (s[i] == '(') {
                posOpen = i;
            }

            if (s[i] == '?') {
                question++;
            }
        }
        
        if (posOpen != s.length() - 1 && posClose != 0 && question % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}