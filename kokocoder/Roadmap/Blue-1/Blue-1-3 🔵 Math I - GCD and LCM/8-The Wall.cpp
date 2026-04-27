#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main () {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    long long lcm = x * y / gcd(x, y);
    
    long long res1 = static_cast<double>(b) / lcm;
    long long res2 = ceil(static_cast<double>(a) / lcm);
    if (res1 || res2) {
        cout << res1 - res2 + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}