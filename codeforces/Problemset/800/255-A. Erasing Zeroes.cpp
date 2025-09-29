#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1303/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first = 0;
        int last = 0;
        bool found = false;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                first = i;
                found = true;
                break;
            }
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                last = i;
                break;
            }
        }

        if (!found) {
            cout << 0 << endl;
            continue;
        }

        int res = 0;
        for (int i = first; i <= last; i++) {
            if (s[i] == '0') {
                res++;
            }
        }
        cout << res << endl;
    }
}