#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1976/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n + 1);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        long long tot = 1;
        int res = 1e9;
        int lastVal = arr2[arr2.size() - 1];
        for (int i = 0 ; i < arr1.size(); i++) {
            int maxVal = max(arr1[i], arr2[i]);
            int minVal = min(arr1[i], arr2[i]);
            tot += maxVal - minVal;
            if (lastVal <= maxVal && lastVal >= minVal) {
                res = 0;
            }

            res = min(res, min(abs(lastVal - maxVal), abs(lastVal - minVal)));
        }
        cout << tot + res << endl;
    }
}