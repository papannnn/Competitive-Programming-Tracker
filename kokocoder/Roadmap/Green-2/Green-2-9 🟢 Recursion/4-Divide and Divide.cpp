#include <bits/stdc++.h>

using namespace std;
// O(log n ^ 2)
long long f(long long x, map<long long, long long> &memo) {
    if (x < 2) {
        return 0LL;
    }

    if (memo.find(x) != memo.end()) {
        return memo[x];
    }

    long long val1 = x / 2 + (x % 2);
    long long val2 = x / 2;

    long long res1 = f(val1, memo);
    long long res2 = f(val2, memo);

    memo[x] = x + res1 + res2;
    return x + res1 + res2;
}

int main () {
    long long n;
    map<long long, long long> memo;
    cin >> n;
    cout << f(n, memo) << endl;
}