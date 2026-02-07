#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1521/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b == 1) {
            cout << "NO" << endl;
            continue;
        }

        if (b == 2) {
            cout << "YES" << endl;
            long long x = a * b;
            long long y = x + a;
            cout << x << " " << a << " " << y << endl;
            continue;
        }

        long long z = a * b;
        long long nearlyGood = a;
        long long nearlyGood1 = a * (b - 1);
        cout << "YES" << endl;
        cout << nearlyGood1 << " " << nearlyGood << " " << z << endl;
    }
}