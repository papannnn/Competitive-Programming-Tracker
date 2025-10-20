#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1919/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int plus = 0;
        int minus = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+') {
                plus++;
            } else {
                minus++;
            }
        }

        cout << (max(plus, minus) - min(plus, minus)) << endl;
    }
}