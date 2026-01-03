#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1891/A
// O(t * n)
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

        bool valid = true;
        for (int i = 1; pow(2, i) <= arr.size(); i++) {
            for (int j = pow(2, i) + 1; j < pow(2, i + 1) && j < arr.size() - 1; j++) {
                // cout << arr[j] << " ";
                if (arr[j] > arr[j + 1]) {
                    valid = false;
                }
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}