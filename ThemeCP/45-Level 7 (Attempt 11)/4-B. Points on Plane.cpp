#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1809/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long x = sqrt(n);
        while (x * x > n) x--;
        while (x * x < n) x++;
        cout << x - 1 << endl;
    }
}