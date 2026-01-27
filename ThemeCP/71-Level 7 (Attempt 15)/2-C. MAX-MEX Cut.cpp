#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1566/problem/C
// O(t * s)
bool getPoint(bool &one, bool &zero) {
    if (zero && one) {
        return 2;
    }

    if (!zero && one) {
        return 0;
    }

    return 1;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        bool one = false;
        bool zero = false;
        int res = 0;
        bool prev = false;
        for (int i = 0 ; i < s1.length(); i++) {
            one |= s1[i] == '1' || s2[i] == '1';
            zero |= s1[i] == '0' || s2[i] == '0';

            if (one && !zero) {
                continue;
            }

            if (one && zero) {
                res += 2 + prev - (s1[i] == '1' && s2[i] == '1');
                one = false;
                zero = false;
                prev = false;
                continue;
            }

            if (zero && !one) {
                if (prev) {
                    res += 1;
                } else {
                    prev = true;
                }
            }
        }
        cout << res + prev << endl;
    }
}