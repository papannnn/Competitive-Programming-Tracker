#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/556/A
// O(s)
int main () {
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

    cout << abs(one - zero) << endl;
}