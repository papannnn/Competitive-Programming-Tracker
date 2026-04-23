#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    vector<bool> primes(1e7 + 1);
    for (long long i = 2; i <= 1e7; i++) {
        if (primes[i]) {
            continue;
        }
        
        for (long long j = i * i; j <= 1e7; j += i) {
            primes[j] = true;
        }
    }

    vector<long long> val;
    for (int i = 2; i <= 1e7; i++) {
        if (!primes[i]) {
            val.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << val[n - 1] << endl;
    }
}