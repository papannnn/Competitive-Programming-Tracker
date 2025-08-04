#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1872/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int minVal = min(a, b);
        int maxVal = max(a, b);
        int diff = abs(minVal - maxVal);
        cout << (diff / 2 + (diff % 2)) / c + ((diff / 2 + (diff % 2)) % c != 0) << endl;
    }
}