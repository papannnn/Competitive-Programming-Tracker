#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1473/A
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        bool valid = true;
        for (int num : arr) {
            valid &= num <= d;
        }

        if (valid) {
            cout << "YES" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        cout << (arr[0] + arr[1] <= d ? "YES" : "NO") << endl;
    }
}