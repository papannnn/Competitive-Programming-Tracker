#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        string temp = "";
        temp += tolower(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) == temp.back()) {
                continue;
            }

            temp += tolower(s[i]);
        }

        cout << (temp.compare("meow") == 0 ? "YES" : "NO") << endl;
    }
}