#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2104/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        bool kingAlice = s[s.length() - 1] == 'A';
        bool aceAlice = s[0] == 'A';
        bool otherBob = false;
        bool otherAlice = false;
        int maxAlice = -1;
        int maxBob = -1;
        for (int i = 1 ; i < s.length() - 1; i++) {
            if (s[i] == 'B') {
                otherBob = true;
                maxBob = i;
            }

            if (s[i] == 'A') {
                otherAlice = true;
                maxAlice = i;
            }
        }


        if (kingAlice && aceAlice) {
            cout << "Alice" << endl;
            continue;
        }

        if (!kingAlice && !aceAlice) {
            cout << "Bob" << endl;
            continue;
        }

        if (!aceAlice && kingAlice) {
            if (maxBob >= maxAlice) {
                cout << "Bob" << endl;
            } else {
                cout << "Alice" << endl;
            }
            continue;
        }

        if (aceAlice && !kingAlice) {
            if (maxBob == -1) {
                cout << "Alice" << endl;
            } else {
                cout << "Bob" << endl;
            }
            continue;
        }
    }
}