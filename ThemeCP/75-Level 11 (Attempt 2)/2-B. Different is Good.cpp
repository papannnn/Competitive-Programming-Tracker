#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/672/problem/B
// O(s)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;
    unordered_set<char> flag;
    bool valid = true;
    int res = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (flag.size() + res == 26) {
            valid = false;
            break;   
        }

        if (flag.find(s[i]) == flag.end()) {
            flag.insert(s[i]);
        } else {
            res++;
        }
    }

    if (valid) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}