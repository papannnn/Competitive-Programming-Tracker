#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2029/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        int end = r / k;
        cout << max(0, end - l + 1) << endl;
    }
}