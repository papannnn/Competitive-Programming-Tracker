#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1929/A
// O(t * n log n)
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
        sort(arr.begin(), arr.end(), greater<int>());
        int res = 0;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            res += abs(arr[i] - arr[i + 1]);
        }
        cout << res << endl;
    }
}