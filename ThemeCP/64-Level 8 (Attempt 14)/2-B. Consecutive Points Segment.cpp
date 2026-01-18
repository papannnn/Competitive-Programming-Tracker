#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1671/B
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

        int prev = arr[0];
        for (int i = 0 ; i < arr.size(); i++) {
            if (prev == arr[i]) {
                arr[i]++;
                prev = arr[i];
                continue;
            }

            if (prev < arr[i] && arr[i] - prev == 2) {
                arr[i]--;
                prev = arr[i];
                continue;
            }

            if (prev < arr[i] && arr[i] - prev == 1) {
                prev = arr[i];
                continue;
            }

            arr[i]++;
            prev = arr[i];
        }

        bool valid = true;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            // cout << arr[i] << " ";
            if (arr[i + 1] - arr[i] != 1) {
                valid = false;
                break;
            }
        }
        // cout << endl;
        cout << (valid ? "YES" : "NO") << endl;
    }
}