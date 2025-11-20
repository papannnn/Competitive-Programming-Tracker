#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1896/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int maxCeil = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                maxCeil = i;
                break;
            }
        }
        int res = 0;
        bool flag = false;
        for (int i = maxCeil - 1; i >= 0; i--) {
            if (s[i] == 'A') {
                res += abs(maxCeil - i);
                maxCeil = i;
            }
        }
        cout << res << endl;
    }
}
