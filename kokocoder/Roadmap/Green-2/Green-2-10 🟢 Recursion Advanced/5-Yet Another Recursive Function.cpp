#include <bits/stdc++.h>

using namespace std;
// O(log n)
long long f(long long n, unordered_map<long long, long long> &memo) {
    if (n == 0) {
        return 1;
    }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    long long res = f(n / 2, memo) + f(n / 3, memo);
    memo[n] = res;
    return res;
}

int main () {
    long long n;
    cin >> n;
    unordered_map<long long, long long> memo;
    cout << f(n, memo) << endl;
}