#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1845/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int aliceX, aliceY;
        int bobX, bobY;
        int carolX, carolY;
        cin >> aliceX >> aliceY;
        cin >> bobX >> bobY;
        cin >> carolX >> carolY;

        int res = 0;
        if (bobY > aliceY && carolY > aliceY) {
            res += min(abs(bobY - aliceY), abs(carolY - aliceY));
        }

        if (bobY < aliceY && carolY < aliceY) {
            res += min(abs(bobY - aliceY), abs(carolY - aliceY));
        }

        if (bobX > aliceX && carolX > aliceX) {
            res += min(abs(bobX - aliceX), abs(carolX - aliceX));
        }

        if (bobX < aliceX && carolX < aliceX) {
            res += min(abs(bobX - aliceX), abs(carolX - aliceX));
        }
        cout << res + 1 << endl;
    }
}