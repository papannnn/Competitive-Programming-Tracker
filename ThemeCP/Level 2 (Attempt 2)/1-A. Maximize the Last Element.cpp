#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1991/A
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

        int res = arr[0];
        for (int i = 0 ; i < arr.size(); i++) {
            if (i % 2) {
                continue;
            }
            res = max(res, arr[i]);
        }
        cout << res << endl;
    }
}