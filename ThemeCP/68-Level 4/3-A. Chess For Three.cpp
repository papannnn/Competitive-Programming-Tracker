#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1973/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        priority_queue<int> q;
        if (p1) {
            q.push(p1);
        }

        if (p2) {
            q.push(p2);
        }

        if (p3) {
            q.push(p3);
        }

        int res = 0;
        while (!q.empty()) {
            int big = q.top();
            q.pop();
            if (q.empty()) {
                if (big % 2) {
                    res = -1;
                }
                break;
            }

            int small = q.top();
            q.pop();
            big--;
            small--;
            res++;
            if (big) {
                q.push(big);
            }

            if (small) {
                q.push(small);
            }
        }
        cout << res << endl;
    }
}