#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1832/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        deque<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }
        
        sort(arr.begin(), arr.end());
        long long sum = 0;
        for (int i = 0; i < arr.size() - k; i++) {
            sum += arr[i];
            // cout << arr[i] << " ";
        }
        // cout << endl;
        long long res = sum;
        int left = 0;
        for (int i = arr.size() - k; i < arr.size(); i++) {
            sum += arr[i];
            sum -= arr[left];
            sum -= arr[left + 1];
            left += 2;
            res = max(res, sum);
        }
        cout << res << endl;
    }
}