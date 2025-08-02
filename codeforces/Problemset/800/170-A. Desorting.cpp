#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1853/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &a : arr) {
            cin >> a;
        }

        bool isSorted = true;
        int prev = arr[0];
        int minVal = 1e9;
        for (int i = 1; i < arr.size(); i++) {
            if (prev > arr[i]) {
                isSorted = false;
                break;
            }

            minVal = min(minVal, abs(prev - arr[i]));
            prev = arr[i];
        }

        if (!isSorted) {
            cout << 0 << endl;
            continue;
        }
        
        cout << (minVal / 2 + 1) << endl;
    }
}