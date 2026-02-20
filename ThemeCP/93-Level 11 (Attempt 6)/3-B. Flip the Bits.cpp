#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1504/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0 ; i < s1.length(); i++) {
            cnt1 += s1[i] == '1';
            cnt2 += s2[i] == '1';
        }

        if (cnt1 != cnt2) {
            cout << "NO" << endl;
            continue;
        }

        int cntOne = cnt1;
        int cntZero = s1.length() - cnt1;
        bool toggle = false;
        bool valid = true;
        for (int i = s1.length() - 1; i >= 0; i--) {
            if (s1[i] == s2[i] ^ toggle) {
                if (s1[i] == '0' ^ toggle) {
                    cntZero--;
                } else {
                    cntOne--;
                }
                continue;
            }

            if (cntOne != cntZero) {
                valid = false;
                break;
            }

            toggle = !toggle;
            if (s1[i] == '0' ^ toggle) {
                cntZero--;
            } else {
                cntOne--;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}