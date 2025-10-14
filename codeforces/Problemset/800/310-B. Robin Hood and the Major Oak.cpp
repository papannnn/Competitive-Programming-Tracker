#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2014/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int even;
        if (n % 2 == 1) {
            even = ceil((double) k / 2);
        } else {
            even = floor((double) k / 2);
        }
        cout << (even % 2 == 0 ? "YES" : "NO") << endl;
    }
}