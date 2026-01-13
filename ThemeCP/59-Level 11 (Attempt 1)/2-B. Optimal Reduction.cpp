#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1713/B
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

        vector<int> left(n);
        vector<int> right(n);
        left[0] = arr[0];
        right[n - 1] = arr[n - 1];

        int maxVal = left[0];
        for (int i = 0; i < arr.size(); i++) {
            maxVal = max(maxVal, arr[i]);
            left[i] = maxVal;
        }

        maxVal = right[n - 1];
        for (int i = arr.size() - 1; i >= 0; i--) {
            maxVal = max(maxVal, arr[i]);
            right[i] = maxVal;
        }

        int cnt = 0;
        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i] < left[i - 1] && arr[i] < right[i + 1]) {
                cnt++;
            }
        }

        cout << (cnt == 0 ? "YES" : "NO") << endl;
    }
}