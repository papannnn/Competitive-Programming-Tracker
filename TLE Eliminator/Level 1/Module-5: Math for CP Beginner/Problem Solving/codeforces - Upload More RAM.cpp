#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1987/A
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << (n * k - (k - 1)) << endl;
    }
}