#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2136/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _, k;
        cin >> _ >> k;
        string s;
        cin >> s;

        int maxStreak = 0;
        int ptr = 0;
        while (ptr < s.length()) {
            if (s[ptr] == '0') {
                ptr++;
                continue;
            }

            int streak = 1;
            maxStreak = max(maxStreak, streak);
            ptr++;
            while (ptr < s.length() && s[ptr] == '1') {
                streak++;
                ptr++;
                maxStreak = max(maxStreak, streak);
            }
        }

        if (maxStreak >= k) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        int currSmall = 1;
        int currBig = _;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '0') {
                cout << currBig-- << " ";
                continue;
            } else {
                cout << currSmall++ << " ";
            }
        }
        cout << endl;
    }
}