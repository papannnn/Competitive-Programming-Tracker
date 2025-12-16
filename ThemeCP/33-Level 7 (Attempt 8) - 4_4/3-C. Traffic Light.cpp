#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1744/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        char r;
        cin >> _ >> r;
        string s;
        cin >> s;
        if (r == 'g') {
            cout << 0 << endl;
            continue;
        }

        int earliest = -1;
        int len = s.length();
        for (int i = 0 ; i < len; i++) {
            if (s[i] == 'g') {
                earliest = i;
                break;
            }
        }

        int stop = earliest;
        int maxVal = 0;
        int i = earliest - 1;
        while (i != stop) {
            if (i == -1) {
                i = len - 1;
                continue;
            }

            if (s[i] == 'g') {
                earliest = i;
                i--;
                continue;
            }

            if (s[i] == r) {
                if (i < earliest) {
                    maxVal = max(maxVal, abs(i - earliest));
                } else {
                    maxVal = max(maxVal, earliest + (len - i));
                }
            }
            i--;
        }
        cout << maxVal << endl;
    }
}