#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1985/C
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        vector<long long> prefix;
        for (long long &num : arr) {
            cin >> num;
        }
        // cout << endl;

        int res = 0;
        long long sum = 0;
        long long maxVal = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            maxVal = max(arr[i], maxVal);
            sum += arr[i];
            if (sum - maxVal == maxVal) {
                res++;
            }
        }
        
        cout << res << endl;
    }
}
// 1 1 2 0
// 2 0 1 1
// 0 1 1 2