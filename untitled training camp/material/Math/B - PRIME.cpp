#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/631793#problem/B
// O(n)
int main () {
    vector<bool> sieve(1e6 + 1);
    for (long long i = 2; i <= 1e6; i++) {
        if (sieve[i]) {
            continue;
        }

        for (long long j = i * i; j <= 1e6; j += i) {
            sieve[j] = true;
        }
    }

    set<long long> prime;
    for (int i = 2; i <= 1e6; i++) {
        if (!sieve[i]) {
            prime.insert(i);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long val = sqrt(n);
        if (val * val != n) {
            cout << "NO" << endl;
            continue;
        }

        if (prime.find(n) == prime.end() && prime.find(sqrt(n)) != prime.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}