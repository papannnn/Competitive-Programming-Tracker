#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1674/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        bool valid1 = true;
        for (int i = 0 ; i < s2.length(); i++) {
            if (s2[i] == 'a') {
                valid1 = false;
            }
        }

        if (s2.length() > 1 && !valid1) {
            cout << -1 << endl;
            continue;
        }

        if (!valid1) {
            cout << 1 << endl;
            continue;
        }

        long long cnt = pow(2, s1.length());

        cout << cnt << endl;
    }
}