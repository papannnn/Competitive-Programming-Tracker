#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long n;
    cin >> n;
    unsigned long long x = 1;
    int res = 0;
    while (x * 2 <= n) {
        x *= 2;
        res++;
    }
    cout << res << endl;
}