#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1469/B
// O(t * n + m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        int sum1 = 0;
        int maxSum1 = 0;
        vector<int> arr1(n);
        for (int &num : arr1) {
            cin >> num;
            sum1 += num;
            maxSum1 = max(maxSum1, sum1);
        }
        cin >> m;
        int sum2 = 0;
        int maxSum2 = 0;
        vector<int> arr2(m);
        for (int& num : arr2) {
            cin >> num;
            sum2 += num;
            maxSum2 = max(maxSum2, sum2);
        }

        // cout << maxSum1 << endl;
        // cout << maxSum2 << endl;
        cout << max(0, max(0, maxSum1) + max(0, maxSum2)) << endl;;
        // cout << endl;
    }
}