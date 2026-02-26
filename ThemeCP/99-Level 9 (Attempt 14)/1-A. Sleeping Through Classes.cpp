#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2173/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int res = 0;
        int sleep = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                if (sleep <= 0) {
                    res++;
                }
                sleep--;
            } else {
                sleep = k;
            }
        }
        cout << res << endl;
    }
}