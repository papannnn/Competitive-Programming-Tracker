#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1543/A
// O(t * log(min(x, y)))
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x == y) {
            cout << "0 0" << endl;
            continue;
        }
        
        long long maxVal = max(abs(x - y), max(abs(x - y) / gcd(x, y), gcd(x, y)));
        long long step = min((maxVal - (x % maxVal == 0 ? maxVal : x % maxVal)), x % maxVal);
        cout << maxVal << " " << step << endl;
    }
}