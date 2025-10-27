#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1397/A
// O(t * n * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<char, int> mapping;
        for (int i = 0 ; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++) {
                mapping[s[j]]++;
            }
        }

        bool valid = true;
        for (auto m : mapping) {
            valid &= m.second % n == 0;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}