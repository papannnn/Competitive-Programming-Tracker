#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1611/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if ((s[s.length() - 1] - '0') % 2 == 0) {
            cout << 0 << endl;
            continue;
        }
        
        if ((s[0] - '0') % 2 == 0) {
            cout << 1 << endl;
            continue;
        }

        int pos = -1;
        for (int i = 0 ; i < s.length(); i++) {
            int parity = (s[i] - '0') % 2;
            if (!parity) {
                pos = i;
                break;
            }
        }
        cout << (pos == -1 ? pos : 2) << endl;
    }
}