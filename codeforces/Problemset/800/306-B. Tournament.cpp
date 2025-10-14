#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2123/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        int maxVal = -1;
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
        }
        int val = arr[j - 1];
        if (k == 1) {
            cout << (maxVal == val ? "YES" : "NO") << endl;
        } else {
            cout << "YES" << endl;
        }   
    }
}