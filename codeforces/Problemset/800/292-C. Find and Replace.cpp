#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1807/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        vector<int> alphabet(26);
        for (int i = 0 ; i < 26; i++) {
            alphabet[i] = -1;
        }

        bool valid = true;
        for (int i = 0 ; i < s.size(); i++) {
            int alpha = s[i] - 'a';
            if (alphabet[alpha] == -1) {
                alphabet[alpha] = i;
                continue;
            }

            int currParity = i % 2;
            int thatParity = alphabet[alpha] % 2;
            if (currParity != thatParity) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}