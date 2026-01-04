#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2167/D
// O(t * n log log n)
int main () {
    int t;
    cin >> t;

    vector<bool> flag(1e3 + 1);
    for (int i = 2; i <= flag.size(); i++) {
        if (flag[i]) {
            continue;
        }

        for (int j = i * i; j <= flag.size(); j += i) {
            flag[j] = true;
        }
    }
    vector<long long> primes;
    for (int i = 2; i < flag.size(); i++) {
        if (!flag[i]) {
            primes.push_back(i);
            // cout << i << " ";
        }
    }

    // cout << endl;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long res = 1e19;
        for (int i = 0 ; i < arr.size(); i++) {
            for (int j = 0; j < primes.size(); j++) {
                if (arr[i] % primes[j] != 0) {
                    // cout << arr[i] << " " << primes[j] << endl;
                    res = min(res, primes[j]);
                    break;
                }
            }
        }
        cout << res << endl;
    }
}