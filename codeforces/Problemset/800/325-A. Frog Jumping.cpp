#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1077/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long res =  (a - b) * (k / 2);
        if (k % 2) {
            res += a;
        }
        cout << res << endl;
    }
}