#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/460/A
// O(n)
int main () {
    int n, m;
    cin >> n >> m;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res++;
        if (i % m == 0) {
            n++;
        }
    }
    cout << res << endl;
}