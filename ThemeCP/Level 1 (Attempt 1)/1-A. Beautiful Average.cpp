#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2162/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = -1;
        while (n--) {
            int num;
            cin >> num;
            res = max(res, num);
        }
        cout << res << endl;
    }
}