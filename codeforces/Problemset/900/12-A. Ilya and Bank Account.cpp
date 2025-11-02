#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/313/A
// O(s)
int main () {
    string s;
    cin >> s;
    
    if (s[0] != '-') {
        cout << s << endl;
        return 0;
    }

    string res = "";
    for (int i = 1 ; i < s.length() - 2; i++) {
        res += s[i];
    }

    res += min(s[s.length() - 1], s[s.length() - 2]);
    if (res.length() == 1 && res[0] == '0') {
        cout << 0 << endl;
    } else {
        cout << '-' << res << endl;
    }
    
}