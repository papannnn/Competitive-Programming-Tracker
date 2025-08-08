#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/265/A
// O(s)
int main () {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int idx = 0;
    for (int i = 0 ; i< s2.length(); i++) {
        if (s2[i] == s1[idx]) {
            idx++;
        }
    }
    cout << idx + 1 << endl;
}