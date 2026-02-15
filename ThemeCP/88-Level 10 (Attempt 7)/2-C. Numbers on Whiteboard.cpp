#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1430/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0 ; i < arr.size(); i++) {
            arr[i] = i + 1;
        }

        cout << 2 << endl;
        for (int i = 0; i < n - 1; i++) {
            cout << arr.back() << " " << arr[arr.size() - 2] << endl;
            int val = ceil(static_cast<double>(arr.back() + arr[arr.size() - 2]) / 2);
            arr.pop_back();
            arr.pop_back();
            arr.push_back(val);
        }
        // cout << arr[0] << endl;
    }
}