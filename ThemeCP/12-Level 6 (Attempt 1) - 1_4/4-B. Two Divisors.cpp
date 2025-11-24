#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1916/B
// O(t)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
    // cout << gcd(1, 5) << endl;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            cout << b * b << endl;
            continue;
        }

        if (b % a == 0) {
            cout << b * (b / a) << endl;
            continue;
        }

        long long c = a / gcd(a, b);
        long long d = c * b;
        if (d == b) {
            d *= 2;
        }

        cout << d << endl;
    }
}
// 200
// 100 50 25 20 10 5 4 2 1