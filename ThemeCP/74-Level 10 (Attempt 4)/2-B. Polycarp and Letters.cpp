#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/864/problem/B
// O(s)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;

    unordered_map<char, int> mapping;
    int res = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (islower(s[i])) {
            mapping[s[i]]++;
            int size = mapping.size();
            res = max(res, size);
            continue;
        }

        mapping.clear();
    }
    cout << res << endl;
}