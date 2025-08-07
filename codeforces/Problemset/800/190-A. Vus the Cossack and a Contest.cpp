#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1186/A
// O(1)
int main () {
    int n, m, k;
    cin >> n >> m >> k;
    cout << (m >= n && k >= n ? "Yes" : "No") << endl;
}