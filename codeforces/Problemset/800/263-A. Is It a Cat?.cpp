#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int ptr = 0;
        string newS = "";
        while (ptr < s.length()) {
            char c = tolower(s[ptr++]);
            newS += tolower(c);
            while (c == tolower(s[ptr])) {
                ptr++;
            }
        }
        
        cout << (newS.compare("meow") == 0 ? "YES" : "NO") << endl;
    }
}