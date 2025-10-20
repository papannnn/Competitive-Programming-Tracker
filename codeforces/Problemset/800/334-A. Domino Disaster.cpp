#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1567/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        unordered_map<char, char> mapping = {
            {'U', 'D'},
            {'D', 'U'},
            {'L', 'L'},
            {'R', 'R'}
        };
        for (int i = 0 ; i < s.length(); i++) {
            cout << mapping[s[i]];
        }
        cout << endl;
    }
}