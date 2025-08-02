#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1368/A
// O(t * log(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        int counter = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            counter++;
        }
        cout << counter << endl;
    }
}