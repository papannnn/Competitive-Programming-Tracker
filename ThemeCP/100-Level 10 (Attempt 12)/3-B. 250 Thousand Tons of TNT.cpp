#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1899/B
// O(t * n sqrt(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        long long res = 0;
        for (int i = 1 ; i <= n; i++) {
            if (n % i) {
                continue;
            }

            long long maxVal = -1e18;
            long long minVal = 1e18;
            
            for (int j = 0; j < n; j += i) {
                long long sum = 0;
                for (int k = j; k < j + i; k++) {
                    sum += arr[k];
                }
                maxVal = max(maxVal, sum);
                minVal = min(minVal, sum);
            }

            res = max(res, maxVal - minVal);
        }
        cout << res << endl;
    }
}