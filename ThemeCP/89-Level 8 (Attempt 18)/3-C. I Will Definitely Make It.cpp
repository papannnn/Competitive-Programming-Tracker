#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2126/C
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long currVal = arr[k - 1];
        sort(arr.begin(), arr.end());
        long long idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == currVal) {
                idx = i;
                break;
            }
        }

        long long water = 1;
        bool valid = true;
        for (int i = idx; i < arr.size() - 1; i++) {
            long long timeTaken = arr[i + 1] - arr[i];
            if (timeTaken + water - 1 >= arr[i] + 1) {
                valid = false;
                break;
            }
            water += timeTaken;
        }
        
        cout << (valid ? "YES" : "NO") << endl;
    }
}