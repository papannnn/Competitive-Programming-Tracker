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

        if (pos % 2) {
            if (remainder == 3) {
                cout << pos - (div + 1) * 4 << endl;
            }

            if (remainder == 1) {
                cout << (pos + 1) + (div * 4) << endl;
            }

            if (remainder == 2) {
                cout << pos - 1 << endl;
            }

            if (remainder == 0) {
                cout << pos << endl;
            }
        } else {
            if (remainder == 2) {
                cout << pos + 1 << endl;
            }

            if (remainder == 0) {
                cout << pos << endl;
            }

            if (remainder == 1) {
                cout << (pos - 1) - (div * 4) << endl;
            }

            if (remainder == 3) {
                cout << pos + (div + 1) * 4 << endl;
            }
        }
    }
}