#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1811/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _, d;
        cin >> _ >> d;
        string s;
        cin >> s;
        bool input = true;
        for (int i = 0 ; i < s.length(); i++) {
            if (!input) {
                cout << s[i];
                continue;
            }

            int val = s[i] - '0';
            if (val < d) {
                cout << d;
                input = false;
            }
            cout << val;
        }
        
        if (input) {
            cout << d;
        }

        cout << endl;
    }
}