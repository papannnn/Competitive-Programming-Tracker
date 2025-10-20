#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1611/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long c = a + b;
        long long res = min(c / 4, min(a, b));
        cout << res << endl;
    }
}