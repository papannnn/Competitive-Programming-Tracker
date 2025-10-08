#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2051/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int &num : arr1) {
            cin >> num;
        }
        for (int &num : arr2) {
            cin >> num;
        }

        int res = 0;
        for (int i = 0 ; i < arr1.size() - 1; i++) {
            if (arr1[i] > arr2[i + 1]) {
                res += abs(arr1[i] - arr2[i + 1]);
            }
        }
        res += arr1[arr1.size() - 1];
        cout << res << endl;
    }
}