#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1862/A
// O(t * n * m)
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

        int res = 0;
        string s = "vika.";
        for (int i = 0 ; i < m; i++) {
            for (int j = 0 ; j < n; j++) {
                if (arr[j][i] == s[res]) {
                    res++;
                    break;
                }
            }
        }
        cout << (res == 4 ? "YES" : "NO") << endl;
    }
}