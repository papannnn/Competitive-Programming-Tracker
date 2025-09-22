#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1766/A
// O(t * 10logn)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        while (n >= 10) {
            res += 9;
            n /= 10;
        }
        res += n;
        cout << res << endl;
    }
}