#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1994/B
// O(t * s)
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

        bool prevOne = false;
        bool valid = true;
        for (int i = 0 ; i < s1.size(); i++) {
            prevOne |= s1[i] == '1';
            if (s1[i] != s2[i] && !prevOne) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}