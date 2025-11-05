#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/320/A
// O(s)
int main () {
    string s;
    cin >> s;
    
    bool valid = true;
    for (int i = 0 ; i < s.length(); ) {
        if (i < s.length() - 2 && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
            i += 3;
            continue;
        }

        if (i < s.length() - 1 && s[i] == '1' && s[i + 1] == '4') {
            i += 2;
            continue;
        }

        if (s[i] == '1') {
            i++;
            continue;
        }
        valid = false;
        break;
    }
    cout << (valid ? "YES" : "NO") << endl;
}