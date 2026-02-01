#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1481/problem/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        unordered_map<char, int> mapping;
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i]]++;
        }

        bool valid = true;
        if (x > 0) {
            valid &= mapping['R'] >= x;
        }

        if (x < 0) {
            valid &= mapping['L'] >= abs(x);
        }

        if (y > 0) {
            valid &= mapping['U'] >= y;
        }

        if (y < 0) {
            valid &= mapping['D'] >= abs(y);
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}