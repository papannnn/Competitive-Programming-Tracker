#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/59/A
// O(s)
int main () {
    string s;
    cin >> s;
    int low = 0;
    int hi = 0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            low++;
        } else {
            hi++;
        }
    }

    for (int i = 0 ; i < s.length(); i++) {
        char c;
        if (low >= hi) {
            c = tolower(s[i]);
        } else {
            c = toupper(s[i]);
        }
        cout << c;
    }
    cout << endl;
}