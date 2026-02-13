#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2107/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        long long minVal = 1e18;
        long long maxVal = 0;
        long long tot = 0;
        for (long long &num : arr) {
            cin >> num;
            minVal = min(minVal, num);
            maxVal = max(maxVal, num);
            tot += num;
        }

        int cnt = 0;
        for (long long &num : arr) {
            if (num == maxVal) {
                cnt++;
            }
        }

        if (maxVal - minVal > k + (cnt == 1)) {
            cout << "Jerry" << endl;
            continue;
        }

        cout << (tot % 2 == 1 ? "Tom" : "Jerry") << endl;
    }
}
