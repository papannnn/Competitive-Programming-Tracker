#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1843/A
// O(t * nlogn)
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
        int left = 0;
        int right = arr.size() - 1;
        int res = 0;
        while (left < right) {
            res += arr[right] - arr[left];
            right--;
            left++;
        }
        cout << res << endl;
    }
}