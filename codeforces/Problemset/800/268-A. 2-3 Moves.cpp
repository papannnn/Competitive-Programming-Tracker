#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1716/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 2 << endl;
            continue;
        }

        cout << ((n / 3) + (n % 3 > 0)) << endl;
    }
}