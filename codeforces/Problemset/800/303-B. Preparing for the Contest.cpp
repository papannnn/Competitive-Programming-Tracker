#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1914/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int first = n - m - 1;
        for (int i = 0, j = n - m; i <= m; i++, j++) {
            cout << j << " ";
        }

        for (; first > 0; first--) {
            cout << first << " ";
        }
        cout << endl;
    }
}