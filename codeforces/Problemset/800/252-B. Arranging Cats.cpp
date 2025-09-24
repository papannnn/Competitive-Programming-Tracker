#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1921/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s1, s2;
        cin >> s1 >> s2;
        int s1Cnt = 0;
        int s2Cnt = 0;
        for (int i = 0 ; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                if (s1[i] == '1') {
                    s1Cnt++;
                }
                if (s2[i] == '1') {
                    s2Cnt++;
                }
            }
        }
        cout << abs(s1Cnt - s2Cnt) + min(s1Cnt, s2Cnt) << endl;
    }
}