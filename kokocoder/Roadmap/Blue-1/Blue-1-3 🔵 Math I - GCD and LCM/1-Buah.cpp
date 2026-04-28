#include <bits/stdc++.h>

using namespace std;
// O(log(min(a, b)))

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    long long n, a, b;
    cin >> n >> a >> b;
    long long lcm = a * b / gcd(a, b);

    cout << lcm / a + lcm / b << endl;
}