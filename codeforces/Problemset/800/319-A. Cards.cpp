#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1220/A
// O(s)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;
    int z = 0;
    int n = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == 'z') {
            z++;
        }

        if (s[i] == 'n') {
            n++;
        }
    }

    while (n--) {
        cout << 1 << " ";
    }
    
    while (z--) {
        cout << 0 << " ";
    }
    cout << endl;
}