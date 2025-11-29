#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2110/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() == 2) {
            cout << "NO" << endl;
            continue;
        }
        
        int state = 0;
        bool valid = false;
        for (int i = 1 ; i < s.length() - 1; i++) {
            if (s[i] == '(') {
                state++;
            } else {
                state--;
            }
            
            if (state < 0) {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}
