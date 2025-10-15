#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2008/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0;
        for (int i = 0 ; i < s.length(); i++) {
            zero += s[i] == '0';
        }

        int square = sqrt(n);
        if (square * square != n) {
            cout << "No" << endl;
            continue;
        }

        cout << ((square - 2) * (square - 2) == zero ? "Yes" : "No") << endl;
    }
}