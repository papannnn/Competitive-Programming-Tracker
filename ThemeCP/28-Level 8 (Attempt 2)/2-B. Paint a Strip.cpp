#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2040/B
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        if (n <= 4) {
            cout << 2 << endl;
            continue;
        }

        int x = 4;
        int res = 2;
        while (x < n) {
            x = x * 2 + 2;
            res++;
        }
        cout << res << endl;
    }
}