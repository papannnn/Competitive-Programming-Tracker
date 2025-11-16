#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1861/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        bool valid = false;
        for (int i = 0 ; i < s1.length() - 1; i++) {
            if (s1[i] == '0' && s1[i] == s2[i] && s1[i + 1] == '1' && s1[i + 1] == s2[i + 1]) {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}