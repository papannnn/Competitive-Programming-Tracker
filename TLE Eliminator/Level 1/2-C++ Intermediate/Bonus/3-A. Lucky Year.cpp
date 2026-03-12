#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/808/A
// O(log10 n)
int main () {
    int n;
    cin >> n;
    int x = 1;
    int m = n;
    while (n >= 10) {
        n /= 10;
        x *= 10;
    }
    x *= n + 1;
    cout << x - m << endl;
}