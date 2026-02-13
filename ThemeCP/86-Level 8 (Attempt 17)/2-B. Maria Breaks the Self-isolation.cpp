#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1358/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i < arr.size(); i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int maxVal = 0;
        for (int i = 1; i <= n ; i++) {
            if (i >= arr[i]) {
                maxVal = i;
            }
        }
        cout << maxVal + 1 << endl;
    }
}