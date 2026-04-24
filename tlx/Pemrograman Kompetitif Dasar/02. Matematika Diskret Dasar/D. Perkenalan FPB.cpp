#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long f = (b * d) / gcd(b, d);
    a *= f / b;
    c *= f / d;
    long long e = a + c;

    for (long long i = 2; i * i <= max(e, f); i++) {
        if (gcd(e, f) == 1) {
            break;
        }
        
        while ((e % i == 0) && (f % i == 0)) {
            e /= i;
            f /= i;
        }
    }

    cout << e << " " << f << endl;
}