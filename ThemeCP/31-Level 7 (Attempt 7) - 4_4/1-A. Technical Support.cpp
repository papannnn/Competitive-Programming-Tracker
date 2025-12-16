#include <bits/stdc++.h>

using namespace std;
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        if (s.length() == 1) {
            cout << "No" << endl;
            continue;
        }
        int q = 0;
        bool answered = false;
        bool valid = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'Q') {
                q++;
                continue;
            }

            if (s[i] == 'A' && q > 0) {
                q--;
            }
        }
        if (q > 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }


    }
}