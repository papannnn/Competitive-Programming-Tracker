#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1808/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ptr = r;
        int cnt = 100;
        int res = 0;
        int bestDiff = -1;
        while (cnt-- && ptr >= l) {
            int val = ptr;
            int minVal = 1e9;
            int maxVal = -1;
            while (val) {
                int n = val % 10;
                minVal = min(minVal, n);
                maxVal = max(maxVal, n);
                // cout << minVal << endl;
                // cout << maxVal << endl;
                val /= 10;
            }

            if (maxVal - minVal > bestDiff) {
                bestDiff = maxVal - minVal;
                res = ptr;
            }
            ptr--;
        }
        cout << res << endl;
    }
}