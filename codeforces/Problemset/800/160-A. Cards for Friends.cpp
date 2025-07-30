#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1472/A
// O(n * (log w + log h))
int main () {
    int n;
    cin >> n;
    while (n--) {
        int w, h, n;
        cin >> w >> h >> n;
        int res = 1;
        while (w % 2 == 0 && w != 0) {
            w /= 2;
            res *= 2;
        }

        while (h % 2 == 0 && h != 0) {
            h /= 2;
            res *= 2;
        }

        cout << (res >= n ? "YES" : "NO") << endl;
    }
}