#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2137/A
// O(t * k)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> k >> x;
        while (k--) {
            if (((x * 2) % 2) == 0) {
                x *= 2;
            } else {
                x = (x - 1) / 3;
            }
        }
        cout << x << endl;
    }
}