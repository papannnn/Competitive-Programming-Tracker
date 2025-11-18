#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1954/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (m == 1) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> arr(m + 1);
        int ptr = 1;
        for (int i = 0 ; i < n; i++) {
            arr[ptr]++;
            ptr++;
            if (ptr == m + 1) {
                ptr = 1;
            }
        }
        cout << (n - arr[1] > k ? "YES" : "NO") << endl;
    }
}
