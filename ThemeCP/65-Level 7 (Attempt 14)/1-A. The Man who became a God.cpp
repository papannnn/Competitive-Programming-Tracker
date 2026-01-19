#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1847/A
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        vector<int> diff;
        for (int i = 0; i < arr.size() - 1; i++) {
            diff.push_back(abs(arr[i] - arr[i + 1]));
        }

        sort(diff.begin(), diff.end());
        for (int &num : diff) {
            cout << num << " ";
        }
        cout << endl;
        k--;
        while (k--) {
            diff.pop_back();
        }

        int tot = accumulate(diff.begin(), diff.end(), 0);
        cout << tot << endl;
    }
}