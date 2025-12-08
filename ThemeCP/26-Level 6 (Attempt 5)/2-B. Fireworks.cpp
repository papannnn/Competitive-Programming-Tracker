#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1945/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long res = 0;
        res += k / a;
        res += k / b;
        cout << res + 2 << endl;
    }
}