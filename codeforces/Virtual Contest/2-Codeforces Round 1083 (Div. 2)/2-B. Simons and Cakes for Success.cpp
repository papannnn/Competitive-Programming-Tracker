#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2205/problem/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        set<int> res;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                res.insert(i);
                n /= i;
            }
        }
        res.insert(n);
        long long val = 1;
        for (auto &num : res) {
            val *= num;
        }
        cout << val << endl;
    }
}