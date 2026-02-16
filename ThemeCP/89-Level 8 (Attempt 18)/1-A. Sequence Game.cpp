#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2164/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long maxVal = -1e9;
        long long minVal = 1e9;
        for (long long &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
            minVal = min(minVal, num);
        }

        long long x;
        cin >> x;
        if (x >= minVal && x <= maxVal) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}