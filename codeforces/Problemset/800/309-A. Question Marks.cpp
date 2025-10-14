#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1993/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(4);
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '?') {
                continue;
            }
            arr[s[i] - 'A']++;
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            res += min(arr[i], n);
        }
        cout << res << endl;
    }
}