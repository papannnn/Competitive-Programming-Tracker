#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1579/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int countB = 0;
        int countAC = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'B') {
                countB++;
            } else {
                countAC++;
            }
        }
        cout << (countB == countAC ? "YES" : "NO") << endl;
    }
}