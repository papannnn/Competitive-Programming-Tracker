#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1632/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }
        if (one > 1 || zero > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}