#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1475/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2) {
            cout << "YES" << endl;
            continue;
        }

        while (n % 2 == 0) {
            n /= 2;
        }

        cout << (n == 1 ? "NO" : "YES") << endl;
    }
}