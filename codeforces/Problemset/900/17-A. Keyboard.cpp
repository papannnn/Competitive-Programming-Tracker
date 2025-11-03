#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/474/A
// O(s)
int main () {
    char c;
    cin >> c;
    string s;
    cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int adjust = c == 'R' ? -1 : 1;
    for (int i = 0 ; i < s.length(); i++) {
        int idx = -1;
        for (int j = 0 ; j < keyboard.length(); j++) {
            if (s[i] == keyboard[j]) {
                idx = j;
                break;
            }
        }
        cout << keyboard[idx + adjust];
    }
    cout << endl;
}