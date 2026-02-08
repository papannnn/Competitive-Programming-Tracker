#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2092/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long sum = 0;
        int odd = 0;
        int even = 0;
        long long maxVal = 0;
        for (long long& num : arr) {
            cin >> num;
            sum += num;
            maxVal = max(maxVal, num);
            if (num % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if (odd == 0 || even == 0) {
            cout << maxVal << endl;
            continue;
        }

        cout << sum - odd + 1 << endl;
    }
}