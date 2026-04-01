#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/631793#problem/C
// O(max(s1, s2))
int main () {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << s1 << endl;
    } else {
        cout << 1 << endl;
    }
}