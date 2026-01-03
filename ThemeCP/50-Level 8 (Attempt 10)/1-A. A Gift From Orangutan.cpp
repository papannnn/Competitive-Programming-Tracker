#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2030/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxVal = -1;
        int minVal = 1000;
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
            minVal = min(minVal, num);
        }

        int res = 0;
        for (int i = 1; i < n; i++) {
            res += abs(maxVal - minVal);
        }
        cout << res << endl;
    }
}