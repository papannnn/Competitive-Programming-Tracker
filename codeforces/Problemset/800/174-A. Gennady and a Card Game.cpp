#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1097/A
// O(1)
int main () {
    string s;
    cin >> s;
    bool found = false;
    for (int i = 0 ; i < 5; i++) {
        string s1;
        cin >> s1;
        if (s1[0] == s[0] || s1[1] == s[1]) {
            found = true;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}