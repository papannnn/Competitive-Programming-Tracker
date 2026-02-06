#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1474/B
// O(t)
int main () {
    vector<int> flagging (1e5 + 1);
    for (int i = 2; i <= 1e5; i++) {
        if (flagging[i]) {
            continue;
        }
        int curr = i * 2;
        for (int j = i * 2; j <= 1e5; j += i) {
            flagging[j] = 1;
        }
    }

    vector<int> primes;
    for (int i = 2; i < flagging.size(); i++) {
        if (flagging[i] == 0) {
            primes.push_back(i);
        }
    }

    // cout << primes.back() << endl;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> res = {1};
        for (int i = 0 ; i < primes.size(); i++) {
            if (primes[i] - res.back() >= n) {
                res.push_back(primes[i]);
                break;
            }
        }

        for (int i = 0 ; i < primes.size(); i++) {
            if (primes[i] - res.back() >= n) {
                res.push_back(primes[i]);
                break;
            }
        }
        cout << (res[1] * res[2]) / gcd(res[1], res[2]) << endl;
    }
}