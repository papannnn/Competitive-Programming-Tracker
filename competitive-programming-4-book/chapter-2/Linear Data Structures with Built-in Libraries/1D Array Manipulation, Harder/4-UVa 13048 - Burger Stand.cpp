#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-13048
// O(t * s)
int main () {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string s;
        cin >> s;

        int res = 0;
        for (int j = 0; j < s.length(); j++) {
            bool valid = true;
            valid &= s[j] != 'D';
            valid &= s[j] != 'B';
            valid &= s[j] != 'S';

            if (j < s.length() - 2) {
                valid &= s[j + 2] != 'B';
            }

            if (j < s.length() - 1) {
                valid &= s[j + 1] != 'B';
                valid &= s[j + 1] != 'S';
            }

            if (j > 0) {
                valid &= s[j - 1] != 'S';
            }
            res += valid;
        }

        cout << "Case " << i << ": " << res << endl;
    }
}