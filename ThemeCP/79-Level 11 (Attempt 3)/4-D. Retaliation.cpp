#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2117/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        bool valid = true;
        int firstDiff = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++) {
            valid &= arr[i] - arr[i - 1] == firstDiff;
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (firstDiff < 0) {
                arr[i] = arr[i] + firstDiff * (n - i);
            } else {
                arr[i] = arr[i] + -firstDiff * (i + 1);
            }
        }

        cout << (arr[0] >= 0 && arr[0] % (n + 1) == 0 ? "YES" : "NO") << endl;
    }
}