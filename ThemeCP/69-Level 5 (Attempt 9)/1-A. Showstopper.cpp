#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1798/A
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

        int maxVal1 = arr1.back();
        int maxVal2 = arr2.back();
        for (int i = 0 ; i < arr1.size() - 1; i++) {
            if (arr1[i] > maxVal1 || arr2[i] > maxVal2) {
                swap(arr1[i], arr2[i]);
            }
            maxVal1 = max(maxVal1, arr1[i]);
            maxVal2 = max(maxVal2, arr2[i]);
        }

        if ((arr1.back() >= maxVal1 && arr2.back() >= maxVal2) || ((arr1.back() >= maxVal2 && arr2.back() >= maxVal1)) || n == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}