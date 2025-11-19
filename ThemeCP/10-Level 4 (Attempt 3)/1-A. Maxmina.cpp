#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1746/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        bool valid = false;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            valid |= num == 1;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}