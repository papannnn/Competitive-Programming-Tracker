#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;
    int pos = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '*') {
            pos = i;
            break;
        }
    }

    bool res1 = false;
    for (int i = pos; i < s.length(); i++) {
        res1 |= s[i] == '|';
    }

    bool res2 = false;
    for (int i = pos; i >= 0; i--) {
        res2 |= s[i] == '|';
    }
    cout << (res1 && res2 ? "in" : "out") << endl;
}