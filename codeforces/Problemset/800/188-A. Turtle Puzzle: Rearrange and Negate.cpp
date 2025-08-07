#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1933/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        while (n--) {
            int val;
            cin >> val;
            res += abs(val);
        }
        cout << res << endl;
    }
}