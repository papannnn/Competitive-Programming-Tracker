#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/E
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n << " ";
        for (int i = 1; i <= n - 1; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
}