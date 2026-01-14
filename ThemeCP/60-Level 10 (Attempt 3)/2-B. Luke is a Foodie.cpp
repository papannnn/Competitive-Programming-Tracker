#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1704/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 0;
        int maxVal = -1;
        int minVal = 1e9 + 1;
        for (int i = 0 ; i < arr.size(); i++) {
            // if (maxVal == -1 || minVal == -1) {
            maxVal = max(maxVal, arr[i]);
            minVal = min(minVal, arr[i]);
            // }
            if (maxVal - x > minVal + x) {
                res++;
                minVal = arr[i];
                maxVal = arr[i];
            }
        }
        cout << res << endl;
    }
}