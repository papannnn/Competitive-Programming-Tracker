#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1550/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tot = 0;
        int curr = 1;
        int res = 0;
        while (tot < n) {
            tot += curr;
            curr += 2;
            res++;
        }
        cout << res << endl;
    }
}