#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1374/B
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 3 != 0 && n != 1) {
            cout << -1 << endl;
            continue;
        }

        int res = 0;
        bool flag = true;
        while (n != 1) {
            res++;
            if (n % 3 != 0) {
                flag = false;
                break;
            }

            if (n % 6 != 0) {
                n *= 2;
                continue;
            }

            n /= 6;
        }

        if (!flag) {
            cout << -1 << endl;
            continue;
        }

        cout << res << endl;
    }
}