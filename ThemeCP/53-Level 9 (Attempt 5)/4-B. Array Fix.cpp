#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1948/B
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

        bool valid = true;
        int prev = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            int val1 = arr[i];

            int val2 = arr[i];
            int val3 = arr[i];
            if (arr[i] >= 10) {
                val2 = arr[i] / 10;
                val3 = arr[i] % 10;
            }

            if (val2 <= val3 && val2 >= prev) {
                prev = val3;
                continue;
            }

            if (val1 >= prev) {
                prev = val1;
                continue;
            }
            valid = false;
            break;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}