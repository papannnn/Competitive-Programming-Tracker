#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1735/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int minVal = 1e9;
        for (int &num : arr) {
            cin >> num;
            minVal = min(minVal, num);
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            res += arr[i] / (minVal * 2 - 1);
            if (arr[i] % (minVal * 2 - 1) == 0) {
                res--;
            }
        }
        cout << res << endl;
    }
}