#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2084/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        long long currGcd = 0;
        bool valid = false;
        for (int i = 1 ; i < arr.size(); i++) {
            if (arr[i] % arr[0] != 0) {
                continue;
            }
            currGcd = gcd(currGcd, arr[i]);
            valid |= currGcd == arr[0];
        }

        cout << (valid ? "Yes" : "No") << endl;
    }
}