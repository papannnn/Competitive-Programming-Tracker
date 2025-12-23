#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1784/A
// O(t * n log n)
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

        sort(arr.begin(), arr.end());
        int maxVal = arr[arr.size() - 1];

        int expectedVal = 1;
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == expectedVal) {
                expectedVal++;
            } else if (arr[i] > expectedVal) {
                res += arr[i] - expectedVal;
                expectedVal++;
            }
        }
        cout << res << endl;
    }
}
// 4
// 3 2 1

// 2 1
// 100