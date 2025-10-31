#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/133/A
// O(s)
int main () {
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            flag = true;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
}