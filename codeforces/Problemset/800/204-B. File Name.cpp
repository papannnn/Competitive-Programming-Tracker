#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/978/B
// O(n)
int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ptr = 0;
    int res = 0;
    while (ptr < n) {
        int amt = 0;
        while (ptr < n && s[ptr] == 'x') {
            ptr++;
            amt++;
        }
        res += amt - 2 > 0 ? amt - 2 : 0;
        ptr++;
    }
    cout << res << endl;
}