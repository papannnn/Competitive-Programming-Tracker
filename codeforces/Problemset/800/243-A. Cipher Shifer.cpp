#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1840/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int pos = 0;
        while (pos < s.length()) {
            cout << s[pos];
            char c = s[pos++];
            while (c != s[pos]) {
                pos++;
            }
            pos++;
        }
        cout << endl;
    }
}