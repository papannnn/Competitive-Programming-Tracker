#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/96/A
// O(s)
int main () {
    string s;
    cin >> s;

    int streak = 0;
    int maxStreak = 0;
    char curr = s[0];
    for (int i = 1 ; i < s.length(); i++) {
        if (s[i] == curr) {
            streak++;
            maxStreak = max(maxStreak, streak);
        } else {
            streak = 1;
            curr = s[i];
        }
    }

    cout << (maxStreak >= 7 ? "YES" : "NO") << endl;
}