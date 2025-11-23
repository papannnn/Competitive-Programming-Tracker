#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1863/A
// O(t * q)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, q;
        cin >> n >> a >> q;
        bool full = n == a;
        int plusCnt = 0;
        int init = a;
        for (int i = 0 ; i < q; i++) {
            char c;
            cin >> c;
            if (c == '+') {
                a++;
                plusCnt++;
                if (a == n) {
                    full = true;
                }
            } else {
                a--;
            }
        }

        if (full) {
            cout << "YES" << endl;
            continue;
        }

        if (init + plusCnt >= n) {
            cout << "MAYBE" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}