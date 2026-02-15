#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2060/D
// O(t * n)
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

        for (int i = 0 ; i < arr.size() - 1; i++) {
            int minVal = min(arr[i], arr[i + 1]);
            arr[i] -= minVal;
            arr[i + 1] -= minVal;
        }

        // for (int &num : arr) {
        //     cout << num << " ";
        // }
        // cout << endl;
        cout << (is_sorted(arr.begin(), arr.end()) ? "YES" : "NO") << endl;
    }
}