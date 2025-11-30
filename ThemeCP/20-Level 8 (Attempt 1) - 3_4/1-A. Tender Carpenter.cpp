#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2053/A
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

        bool valid = false;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            int c = arr[i] + arr[i + 1];
            if (arr[i] * 2 > arr[i + 1] && arr[i + 1] * 2 > arr[i]) {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}