#include <bits/stdc++.h>

using namespace std;
//

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main () {
    int t;
    cin >> t;

    long long res = 1;
    while (t--) {
        long long n;
        cin >> n;
        res = lcm(n, res);
    }
    cout << res << endl;
}