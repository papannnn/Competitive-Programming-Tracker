#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1997/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char res = s[0] == 'a' ? 'b' : 'a';
        cout << s << res << endl;
    }
}