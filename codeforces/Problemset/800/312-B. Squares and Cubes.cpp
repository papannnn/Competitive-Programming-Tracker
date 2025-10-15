#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1619/B
// O(t * (n * sqrt(n)))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> num;
        long long val = 1;
        while (val * val <= n) {
            num.insert(val * val);
            if (val * val * val <= n) {
                num.insert(val * val * val);
            }
            val++;
        }
        cout << num.size() << endl;
    }
}