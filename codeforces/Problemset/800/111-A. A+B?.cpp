#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1772/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        cout << a + b << endl;
    }
}