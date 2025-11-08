#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1593/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool tailZero = false;
        bool tailFive = false;
        int ptr = -1;
        int res = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            tailZero |= s[i] == '0';
            tailFive |= s[i] == '5';
            if (tailZero || tailFive) {
                ptr = i;
                break;
            }
            res++;

        }

        for (int i = ptr - 1; i >= 0; i--) {
            if (!tailZero && s[i] == '0') {
                tailZero = true;
                res++;
                continue;
            }

            if (tailZero && (s[i] == '0' || s[i] == '5')) {
                break;
            }

            if (!tailFive && s[i] == '5') {
                tailFive = true;
                res++;
                continue;
            }

            if (tailFive && (s[i] == '2' || s[i] == '7')) {
                break;
            }
            res++;

        }
        cout << res  << endl;
    }
}