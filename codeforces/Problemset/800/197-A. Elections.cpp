#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1593/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int aRes = a <= max(b, c) ? abs(a - max(b, c)) + 1 : 0;
        int bRes = b <= max(a, c) ? abs(b - max(a, c)) + 1 : 0;
        int cRes = c <= max(b, a) ? abs(c - max(b, a)) + 1 : 0;
        cout << aRes << " " << bRes << " " << cRes << endl;
    }
}