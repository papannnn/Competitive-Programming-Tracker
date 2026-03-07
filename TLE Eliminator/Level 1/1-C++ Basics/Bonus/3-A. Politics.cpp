#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1818/A
// O(t * n * k)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> arr(n);
        vector<bool> tagged(n);
        for (string &s : arr) {
            cin >> s;
        }

        int res = n;
        for (int i = 0; i < k; i++) {
            for (int j = 1; j < arr.size(); j++) {
                if (tagged[j]) {
                    continue;
                }

                if (arr[j][i] != arr[0][i]) {
                    tagged[j] = true;
                    res--;
                    continue;
                }
            }
        }

        cout << res << endl;
    }
}