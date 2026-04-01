#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/631793#problem/D
// O(t * n sqrt(n))
int main () {
    int t;
    cin >> t;
    unordered_map<int, int> mapping;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                mapping[i]++;
            }

            while (n % i == 0) {
                n /= i;
            }
        }

        if (n > 1) {
            mapping[n]++;
        }
    }
    int res = 1;
    for (auto m : mapping) {
        res = max(res, m.second);
    }
    cout << res << endl;
}