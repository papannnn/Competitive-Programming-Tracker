#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    long long p, q, r;
    cin >> p >> q >> r;
    long long lcm = p * q / gcd(p, q);
    lcm = (lcm / gcd(lcm, r)) * r;
    int n;
    cin >> n;
    while (n--) {
        long long num;
        cin >> num;
        cout << (num % lcm == 0 ? "YA" : "TIDAK") << endl;
    }
}