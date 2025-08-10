#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1790/A
// O(t * s)
int main () {
    string pi = "314159265358979323846264338327";
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == pi[i]) {
                res++;
            } else {
                break;
            }
        }
        cout << res << endl;
    }
}