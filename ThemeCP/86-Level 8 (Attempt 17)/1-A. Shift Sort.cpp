#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2140/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> arr(n);
        int cnt = 0;
        for (char &c : arr) {
            cin >> c;
            cnt += c == '1';
        }

        int res = 0;
        for (int i = arr.size() - cnt; i < arr.size(); i++) {
            // cout << arr[i];
            if (arr[i] == '0') {
                res++;
            }
        }
        cout << res << endl;
    }
}