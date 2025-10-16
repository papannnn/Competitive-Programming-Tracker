#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1759/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool valid = true;

        unordered_map<char, int> ptrMapping = {{'Y', 0}, {'e', 1}, {'s', 2}};
        if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's') {
            cout << "NO" << endl;
            continue;
        }

        int ptr = ptrMapping[s[0]];
        string expected = "Yes";
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's') {
                valid = false;
                break;
            }

            if (s[i] != expected[ptr]) {
                valid = false;
                break;
            }

            ptr++;
            if (ptr == 3) {
                ptr = 0;
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}
