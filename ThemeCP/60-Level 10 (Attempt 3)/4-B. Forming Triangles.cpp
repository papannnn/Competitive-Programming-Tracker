#include <bits/stdc++.h>
 
using namespace std;
// https://codeforces.com/problemset/problem/1922/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, long long> mapping;
        for (int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            mapping[num]++;
        }

        long long res = 0;
        long long sum = 0;
        for (auto &m : mapping) {
            long long freq = m.second;
            if (freq >= 3) {
                res += freq * (freq - 1) * (freq - 2) / 6;
            }

            if (freq >= 2) {
                res += freq * (freq - 1) / 2 * sum;
            }
            sum += freq;
        }
        cout << res << endl;
    }
}