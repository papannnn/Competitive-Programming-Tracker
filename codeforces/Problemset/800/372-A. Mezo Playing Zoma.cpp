#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1285/A
// O(n)
int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0;
    int r = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == 'L') {
            l++;
        } else {
            r++;
        }
    }

    int res = 1;
    res += l;
    res += r;
    cout << res << endl;
}