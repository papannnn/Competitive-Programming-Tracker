#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1917/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        unordered_set<char> flag;
        int incr = 0;
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (flag.find(s[i]) == flag.end()) {
                flag.insert(s[i]);
                incr++;
            }

            res += incr;
        }
        cout << res << endl;
    }
}