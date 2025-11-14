#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2169/problem/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.length() == 1) {
            cout << 1 << endl;
            continue;
        }

        bool inf = false;
        for (int i = 1; i < s.length(); i++) {
            char c1 = s[i - 1];
            char c2 = s[i];

            if (c1 == '>' && c2 == '<') {
                inf = true;
                break;
            }

            if (c1 == '>' && c2 == '*') {
                inf = true;
                break;
            }

            if (c1 == '*' && c2 == '<') {
                inf = true;
                break;
            }

            if (c1 == '*' && c2 == '*') {
                inf = true;
                break;
            }
        }

        if (inf) {
            cout << -1 << endl;
            continue;
        }

        int left = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '<' || s[i] == '*') {
                left++;
                continue;
            }
            break;
        }

        int right = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '>' || s[i] == '*') {
                right++;
                continue;
            }
        }
        cout << max(left, right) << endl;
    }
}