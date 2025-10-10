#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1676/C
// O(t * n ^ 2 * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        int res = 1e7;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            for (int k = i + 1; k < arr.size(); k++) {
                string a = arr[i];
                string b = arr[k];
                int temp = 0;
                for (int j = 0 ; j < a.size(); j++) {
                    int diff = abs(a[j] - b[j]);
                    temp += diff;
                }
                res = min(res, temp);
            }
        }
        cout << res << endl;
    }
}