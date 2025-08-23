#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1968/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int maxVal = 0;
        int res = 0;
        for (int i = 1; i < x; i++) {
            if ((gcd(x, i) + i) > maxVal) {
                maxVal = gcd(x, i) + i;
                res = i;
            }
        }
        cout << res << endl;
    }
}