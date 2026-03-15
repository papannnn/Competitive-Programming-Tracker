#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-13181
// O(t * s)
int main () {
    string s;
    while (cin >> s) {
        vector<int> gapLeft(s.length());
        vector<int> gapRight(s.length());

        int lastPos = 1e9;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '.') {
                lastPos = i;
                continue;
            }

            gapLeft[i] = abs(lastPos - i);
        }

        lastPos = 1e9;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '.') {
                lastPos = i;
                continue;
            }

            gapRight[i] = abs(lastPos - i);
        }

        int res = 0;
        for (int i = 0 ; i < gapLeft.size(); i++) {
            if (s[i] == 'X') {
                continue;
            }

            res = max(res, min(gapLeft[i], gapRight[i]));
        }
        cout << res - 1 << endl;
    }
}
