#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1325/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << endl;
        } else {
            cout << n - 1 << " " << 1 << endl;
        }
    }
}