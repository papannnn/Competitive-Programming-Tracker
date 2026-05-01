#include <bits/stdc++.h>

using namespace std;

long long M = 1000000;
bool padding = false;
long long fastPow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    
    long long val = fastPow(a, b / 2);
    long long res = val * val;
    if (b % 2) {
        res *= a;
    }

    if (res >= M) {
        padding = true;
    }
    return res % M;
}

int main () {
    long long a, b;
    cin >> a >> b;
    if (a >= M) {
        padding = true;
    }
    
    long long res = fastPow(a, b);
    if (padding) {
        printf("%06lld\n", res);
    } else {
        cout << res << endl;
    }
}
