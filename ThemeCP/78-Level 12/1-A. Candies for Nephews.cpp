#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2145/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 0) {
            cout << 0 << endl;
            continue;
        }

        cout << 3 - (n % 3) << endl;
    }
}