#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1358/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << n * m / 2 + (n * m % 2) << endl; 
    }
}