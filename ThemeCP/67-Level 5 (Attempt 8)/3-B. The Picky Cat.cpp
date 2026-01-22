#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2102/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr.push_back(abs(num));
        }

        int num = arr[0];
        sort(arr.begin(), arr.end());

        int mid = arr.size() / 2 + 1;
        bool valid = false;
        for (int i = 0 ; i < mid; i++) {
            valid |= arr[i] == num;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}
