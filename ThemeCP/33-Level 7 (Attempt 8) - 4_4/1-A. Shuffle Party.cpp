#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1937/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x = 1;
        while (x * 2 <= n) {
            x *= 2;
        }
        cout << x << endl;
    }
}