#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] != '*' && s[i] == s[i + 1]) {
                s[i] = '*';
                s[i + 1] = '*';

                int l = i;
                int r = i + 1;
                while (l >= 0 && r < s.length()) {
                    if (s[l] == '*') {
                        l--;
                        continue;
                    }

                    if (s[r] == '*') {
                        r++;
                        continue;
                    }

                    if (s[l] == s[r]) {
                        s[l] = '*';
                        s[r] = '*';
                        continue;
                    }

                    break;
                }
            }
        }
        
        bool valid = true;
        for (int i = 0; i < s.length(); i++) {
            valid &= s[i] == '*';
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}