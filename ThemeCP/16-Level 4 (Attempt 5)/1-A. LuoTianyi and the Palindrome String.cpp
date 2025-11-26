#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1825/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        bool same = true;
        char c = s[0];
        for (int i = 1 ; i < s.length(); i++) {
            if (c != s[i]) {
                same = false;
                break;
            }
        }
        int len = s.length();
        cout << (same ? -1 : len - 1) << endl;
    }
}
