#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1806/A
// O(t)
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long diffY = d - b;
        long long diffX = c - a;
        
        if (diffY < 0) {
            cout << -1 << endl;
            continue;
        }

        a += diffY;
        if (a < c) {
            cout << -1 << endl;
            continue;
        }
        diffX = abs(a - c);
        cout << diffY + diffX << endl;
    }
}