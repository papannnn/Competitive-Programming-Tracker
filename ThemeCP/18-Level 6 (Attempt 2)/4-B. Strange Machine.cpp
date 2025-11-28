#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2156/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        bool deductOnly = true;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'B') {
                deductOnly = false;
                break;
            }
        }

        while (q--) {
            int num;
            cin >> num;

            if (deductOnly) {
                cout << num << endl;
                continue;
            }
            int cnt = 0;
            while (num) {
                for (int i = 0; i < s.length() && num; i++) {
                    if (s[i] == 'A') {
                        num--;
                    } else {
                        num /= 2;
                    }
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
}