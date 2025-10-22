#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1631/A
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
        int max1 = -1;
        int max2 = -1;
        for (int i = 0 ; i < arr1.size(); i++) {
            int big = max(arr1[i], arr2[i]);
            int small = min(arr1[i], arr2[i]);
            arr1[i] = big;
            arr2[i] = small;
            max1 = max(arr1[i], max1);
            max2 = max(arr2[i], max2);
        }
        cout << max1 * max2 << endl;
    }
}