#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/F
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) {
            cout << -1 << endl;
            continue;
        }

        cout << "0 0 " << n / 2 << endl;
    }
}