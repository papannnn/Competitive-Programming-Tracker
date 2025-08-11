#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1607/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        unordered_map<char, int> mapping;
        string keyboard;
        cin >> keyboard;
        for (int i = 0 ; i < keyboard.length(); i++) {
            mapping[keyboard[i]] = i;
        }

        string s;
        cin >> s;
        int pos = mapping[s[0]];
        int res = 0;
        for (int i = 1; i < s.length(); i++) {
            res += abs(mapping[s[i]] - pos);
            pos = mapping[s[i]];
        }
        cout << res << endl;
    }
}