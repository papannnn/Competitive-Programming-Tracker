#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2145/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> state(n);
        int l = 0;
        int r = state.size() - 1;
        int unknown = 0;
        int remain = n;
        for (int i = 0 ; i < state.size(); i++) {
            state[i] = '+';
        }
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '0') {
                state[l++] = '-';
                remain--;
            } else if (s[i] == '1') {
                state[r--] = '-';
                remain--;
            } else {
                unknown++;
                // state[l++] = '?';
                // state[r--] = '?';
            }
        }
        int unknown1 = unknown;
        int unknown2 = unknown;
        // cout << unknown << endl;
        // cout << remain << endl;
        if (unknown < remain) {
            for (int i = 0 ; i < state.size() && unknown1; i++) {
                if (state[i] != '-') {
                    unknown1--;
                    state[i] = '?';
                }
            }

            for (int i = state.size() - 1 ; i >= 0 && unknown2; i--) {
                if (state[i] != '-') {
                    unknown2--;
                    state[i] = '?';
                }
            }
        } else {
            for (int i = 0 ; i < state.size(); i++) {
                state[i] = '-';
            }
        }
        

        for (int i = 0 ; i < state.size(); i++) {
            cout << state[i];
        }
        cout << endl;
    }
}