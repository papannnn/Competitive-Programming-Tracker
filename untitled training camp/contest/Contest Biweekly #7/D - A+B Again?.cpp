#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/D
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        res += n % 10;
        res += n / 10;
        cout << res << endl;
    }
}