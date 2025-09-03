#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/894/A
// O(s ^ 3)
int main () {
    string s;
    cin >> s;
    int res = 0;

    if (s.length() < 3) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] != 'Q') continue;
        for (int j = i + 1; j < s.length() - 1; j++) {
            if (s[j] != 'A') continue;
            for (int k = j + 1; k < s.length(); k++) {
                if (s[k] != 'Q') continue;
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
                    res++;
                }
            }
        }
    }
    cout << res << endl;
}