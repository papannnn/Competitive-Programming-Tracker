#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1761/B
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

        if (arr.size() == 1) {
            cout << 1 << endl;
            continue;
        }

        if (arr.size() % 2) {
            cout << arr.size() << endl;
            continue;
        }

        bool bad = true;
        for (int i = 1 ; i < arr.size() - 1; i++) {
            bad &= arr[i - 1] == arr[i + 1];
        }
        bad &= arr[1] == arr[arr.size() - 1];
        bad &= arr[0] == arr[arr.size() - 2];
        if (!bad) {
            cout << arr.size() << endl;
        } else {
            int res = arr.size() - (arr.size() / 2 - 1);
            cout << res << endl;
        }
    }
}
// 1 