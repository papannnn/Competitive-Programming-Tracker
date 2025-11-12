#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1786/A2
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int aBlack = 0;
        int aWhite = 0;
        int bBlack = 0;
        int bWhite = 0;

        int cnt = 1;
        bool isAlice = true;
        int isWhite = true;
        int turn = 2;
        while (n) {
            int amt = min(n, cnt);
            int black = amt / 2;
            int white = amt / 2;
            if (amt % 2) {
                if (isWhite) {
                    white++;
                } else {
                    black++;
                }
            }

            if (isAlice) {
                aBlack += black;
                aWhite += white;
            } else {
                bBlack += black;
                bWhite += white;
            }
            turn++;
            if (turn == 5) {
                turn = 1;
            }

            if (turn % 4 == 1 || turn % 4 == 2) {
                isAlice = true;
            } else {
                isAlice = false;
            }
            n -= amt;
            cnt++;
        }
        cout << aWhite << " " << aBlack << " " << bBlack << " " << bWhite << endl;
    }
}