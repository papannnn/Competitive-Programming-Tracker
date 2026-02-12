#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2004/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        for (int i = n % 2 ; i < arr.size(); i += 2) {
            arr[i] = min(arr[i] + k, arr[i + 1]);
        }

        sort(arr.begin(), arr.end(), greater<long long>());
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (i % 2 == 0) {
                res += arr[i];
            } else {
                res -= arr[i];
            }
        }
        
        cout << res << endl;
    }
}