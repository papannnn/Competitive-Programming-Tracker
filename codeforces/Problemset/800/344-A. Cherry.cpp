#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1554/A
// O(t * n)
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
        
        long long res = 0;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            res = max(res, arr[i] * arr[i + 1]);
        }
        cout << res << endl;
    }
}