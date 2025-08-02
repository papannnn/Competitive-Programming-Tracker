#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1454/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }

        for (int i = 0; i < n - 1; i++) {
            swap(arr[i], arr[i + 1]);
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}