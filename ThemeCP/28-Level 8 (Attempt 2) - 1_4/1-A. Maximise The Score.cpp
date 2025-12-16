#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1930/A
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n * 2);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        int res = 0;
        for (int i = 1 ; i < arr.size(); i += 2) {
            res += arr[i - 1];
        }

        cout << res << endl;
    }
}