#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1992/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        for (int &num : arr) {
            cin >> num;
        }

        int maxVal = -1;
        int idx = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (maxVal < arr[i]) {
                maxVal = arr[i];
                idx = i;
            }
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (idx == i) {
                continue;
            }
            res += arr[i] + arr[i] - 1;
        }
        cout << res << endl;
    }
}