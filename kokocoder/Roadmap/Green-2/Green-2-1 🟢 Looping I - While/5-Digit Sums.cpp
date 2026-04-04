#include <bits/stdc++.h>

using namespace std;
// O(log10(n))
int main () {
    long long n;
    cin >> n;
    long long x = n;
    long long s = 0;
    while (x != 0) {
        s += x % 10;
        x /= 10;
    }
    cout << (n % s == 0 ? "Yes" : "No") << endl;
}