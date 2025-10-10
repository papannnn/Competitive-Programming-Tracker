#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1553/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int last = n % 10;
        int res = 0;
        if (last == 9) {
            res++;
        }

        n /= 10;
        res += n;
        cout << res << endl;
    }
}