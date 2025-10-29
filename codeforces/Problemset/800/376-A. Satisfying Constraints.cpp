#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1920/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int top = 1e9;
        int bot = -1;
        vector<int> exclude;
        while (n--) {
            int mode;
            int num;
            cin >> mode >> num;
            if (mode == 1) {
                bot = max(bot, num);
            }

            if (mode == 2) {
                top = min(top, num);
            }

            if (mode == 3) {
                exclude.push_back(num);
            }
        }

        int deduct = 0;
        for (int &num : exclude) {
            if (num >= bot && num <= top) {
                deduct++;
            }
        }

        if (bot > top) {
            cout << 0 << endl;
            continue;
        }

        cout << abs(top - bot) + 1 - deduct << endl;
    }
}