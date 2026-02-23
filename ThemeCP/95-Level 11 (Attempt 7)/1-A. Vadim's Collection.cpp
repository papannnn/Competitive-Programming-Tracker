#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2098/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    // char c = '9' - 0;
    // cout << c << endl;
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> mapping;
        string res = "xxxxxxxxxx";
        int limit = 9;
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i]]++;
        }

        for (auto &m : mapping) {
            cout << m.first << " " << m.second << endl;
        }

        for (int i = 0; i <= 9; i++) {
            char c = '9' - i;
            if (mapping[c]) {
                res[i] = '9' - i;
                mapping['9' - i]--;
            }
        }

        for (int i = 9; i >= 0; i--) {
            if (res[i] != 'x') {
                continue;
            }

            for (int j = 9; j >= 0; j--) {
                char c = '9' - j;
                if (mapping[c]) {
                    res[i] = '9' - j;
                    mapping['9' - j]--;
                }
                break;
            }
        }

        cout << res << endl;
    }
}