#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2048/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (n % 33 == 0 ? "YES" : "NO") << endl;
    }
}