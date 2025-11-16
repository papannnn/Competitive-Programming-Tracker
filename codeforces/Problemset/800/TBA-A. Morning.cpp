#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1883/problem/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int curr = 1;
        int res = 0;
        for (int i = 0 ; i < 4; i++) {
            int val = s[i] - '0' != 0 ? s[i] - '0' : 10;
            res += abs(val - curr);
            res++;
            curr = val;
        }
        cout << res << endl;
    }
}