#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2019/A
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

        int cnt1 = 0;
        int maxVal1 = 0;
        for (int i = 0 ; i < n; i += 2) {
            maxVal1 = max(maxVal1, arr[i]);
            cnt1++;
        }

        int cnt2 = 0;
        int maxVal2 = 0;
        for (int i = 1 ; i < n; i += 2) {
            maxVal2 = max(maxVal2, arr[i]);
            cnt2++;
        }
        cout << max(maxVal1 + cnt1, maxVal2 + cnt2) << endl;
    }
}