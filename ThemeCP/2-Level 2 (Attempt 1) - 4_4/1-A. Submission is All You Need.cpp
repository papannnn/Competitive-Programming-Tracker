#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2130/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        while (n--) {
            int num;
            cin >> num;
            if (num == 0) {
                res++;
            } else {
                res += num;
            }
        }
        cout << res << endl;
    }
}