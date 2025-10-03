#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1095/A
// O(s)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;
    int ptr = 0;
    int increment = 1;
    string res = "";
    while (ptr < s.length()) {
        res += s[ptr];
        int n = increment;
        while (n--) {
            ptr++;
        }
        increment++;
    }
    cout << res << endl;
}