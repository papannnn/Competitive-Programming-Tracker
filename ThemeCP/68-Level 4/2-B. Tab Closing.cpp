#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2166/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        if (b == a) {
            cout << 1 << endl;
            continue;
        }

        double div = (double) a / n;
        if (div >= b) {
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }
}