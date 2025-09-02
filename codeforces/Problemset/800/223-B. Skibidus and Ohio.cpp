#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2065/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool found = false;
        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                found = true;
            }
        }

        cout << (found ? 1 : s.length()) << endl;
    }
}