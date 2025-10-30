#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1633/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }

        cout << (one == zero ? one - 1 : min(one, zero)) << endl;
    }
}