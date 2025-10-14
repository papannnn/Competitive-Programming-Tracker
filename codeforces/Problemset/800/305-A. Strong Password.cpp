#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1997/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        bool found = false;
        for (int i = 0 ; i < s.length() - 1; i++) {
            cout << s[i];
            char otherC = s[i] == 'a' ? 'b' : 'a';
            if (!found && s[i] == s[i + 1]) {
                cout << otherC;
                found = true;
            }
        }
        cout << s[s.length() - 1];

        if (!found) {
            char otherC = s[s.length() - 1] == 'a' ? 'b' : 'a';
            cout << otherC;
        }
        cout << endl;
    }
}