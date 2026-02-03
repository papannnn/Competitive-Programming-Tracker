#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2176/A
// O(t * n)
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

        int prev = arr[0];
        int res = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (prev > arr[i]) {
                res++;
            }
            prev = max(prev, arr[i]);
        }
        cout << res << endl;
    }
}