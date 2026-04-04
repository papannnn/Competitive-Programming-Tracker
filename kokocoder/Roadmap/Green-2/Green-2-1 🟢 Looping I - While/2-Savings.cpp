#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long n;
    cin >> n;
    long long x = 0;
    long long incr = 1;
    while (x + incr < n) {
        x += incr;
        incr++;
    }
    cout << incr << endl;
}