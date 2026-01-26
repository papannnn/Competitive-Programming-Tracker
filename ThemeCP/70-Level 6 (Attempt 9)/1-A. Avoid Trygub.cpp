#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1450/problem/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        unordered_map<char, int> mapping;
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i]]++;
        }

        string res = "";
        // trygub
        while (mapping['b']--) {
            res += 'b';
        }

        while (mapping['u']--) {
            res += 'u';
        }

        while (mapping['g']--) {
            res += 'g';
        }

        while (mapping['y']--) {
            res += 'y';
        }

        while (mapping['r']--) {
            res += 'r';
        }

        while (mapping['t']--) {
            res += 't';
        }

        for (auto &m : mapping) {
            if (m.second > 0) {
                res += string(m.second, m.first);
            }
        }
        cout << res << endl;
    }
}