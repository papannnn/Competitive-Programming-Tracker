#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1607/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long pos, n;
        cin >> pos >> n;
        int remainder = n % 4;
        long long div = n / 4;

        int polar = 1;
        if (pos % 2) {
            polar = -1;
        }

        if (remainder == 0) {
            cout << pos << endl;
        }

        if (remainder == 2) {
            cout << pos + polar << endl;
        }

        if (remainder == 1) {
            cout << (pos + (-1 * polar) + -(div * 4) * polar) << endl;
        }

        if (remainder == 3) {
            cout << pos + (div + 1) * 4 * polar << endl;
        }
    }
}