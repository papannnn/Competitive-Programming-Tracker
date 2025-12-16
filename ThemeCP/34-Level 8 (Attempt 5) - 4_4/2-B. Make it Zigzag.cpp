#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2154/B
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

        int maxVal = arr[0];
        for (int i = 1 ; i < arr.size(); i ++) {
            maxVal = max(maxVal, arr[i]);
            if (i % 2) {
                arr[i] = maxVal;
            }
        }

        long long res = 0;
        for (int i = 0 ; i < arr.size(); i += 2) {
            int left, right;
            if (i - 1 == -1) {
                left = arr[i + 1];
            } else {
                left = arr[i - 1];
            }

            if (i + 1 == arr.size()) {
                right = arr[i - 1];
            } else {
                right = arr[i + 1];
            }

            if (arr[i] < left && arr[i] < right) {
                continue;
            }

            int minVal = min(left - 1, right - 1);
            res += abs(arr[i] - minVal);
        }
        cout << res << endl;
    }
}