#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1941/B
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

        for (int i = 1; i < arr.size() - 1; i++) {
            int cnt = min(arr[i - 1], min(arr[i + 1], arr[i] / 2));
            arr[i - 1] -= cnt;
            arr[i + 1] -= cnt;
            arr[i] -= cnt * 2;
        }

        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != 0) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}