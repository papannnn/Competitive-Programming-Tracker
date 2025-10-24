#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1541/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 1; i <= n; i++) {
            arr[i - 1] = i;
        }

        for (int i = 0 ; i < n - 1; i += 2) {
            swap(arr[i], arr[i + 1]);
        }

        if (arr.size() % 2) {
            swap(arr[arr.size() - 1], arr[arr.size() - 2]);
        }

        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}