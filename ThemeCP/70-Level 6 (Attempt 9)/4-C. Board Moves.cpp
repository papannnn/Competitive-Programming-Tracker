#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1353/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long res = 0;
        int curr = 3;
        long long amt = 8;
        long long mult = 1;
        while (curr <= n) {
            res += amt * mult * mult;
            curr += 2;
            mult++;
        }
        cout << res << endl;
    }
}