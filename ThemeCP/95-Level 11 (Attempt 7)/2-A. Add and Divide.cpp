#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1485/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b > a) {
            cout << 1 << endl;
            continue;
        }

        if (a == b) {
            cout << 2 << endl;
            continue;
        }

        long long res = 1e9;
        for (int i = 0; i < 6; i++) {
            if (b == 1 && i == 0) {
                continue;
            }

            long long temp = a;
            long long cnt = 0;
            while (temp) {
                temp /= b + i;
                cnt++;
            }
            res = min(res, cnt + i);
        }
        cout << res << endl;
    }
}