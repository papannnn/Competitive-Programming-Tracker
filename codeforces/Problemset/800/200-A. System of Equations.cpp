#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/214/A
// O(1)
int main () {
    int n, m;
    cin >> n >> m;

    int res = 0;
    for (int i = 0 ; i <= 31; i++) {
        for (int j = 0; j <= 31; j++) {
            if (i * i + j == n && j * j + i == m) {
                res++;
            }
        }
    }
    cout << res << endl;
}