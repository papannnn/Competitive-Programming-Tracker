#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1999/D
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        int ptr = 0;
        for (int i = 0 ; i < s1.length(); i++) {
            if (s1[i] == s2[ptr] || s1[i] == '?') {
                if (s1[i] == '?') {
                    s1[i] = s2[ptr];
                }
                ptr++;
            }

            if (ptr == s2.length()) {
                break;
            }
        }

        if (ptr != s2.length()) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0 ; i < s1.length(); i++) {
            if (s1[i] == '?') {
                s1[i] = 'a';
            }
            cout << s1[i];
        }
        cout << endl;
    }
}