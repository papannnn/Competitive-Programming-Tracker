#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1251/problem/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ptr = 0;
        set<char> res;
        while (ptr < s.length()) {
            int cnt = 1;
            char curr = s[ptr];
            ptr++;
            while (ptr < s.length() && s[ptr] == curr) {
                ptr++;
                cnt++;
            }

            if (cnt % 2) {
                res.insert(curr);
            }
        }

        for (auto& c : res) {
            cout << c;
        }
        cout << endl;
    }
}