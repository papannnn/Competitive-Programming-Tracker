#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1914/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        vector<int> arr(26);
        int val = 1;
        for (int &num : arr) {
            num = val++;
        }

        for (int i = 0 ; i < s.length(); i++) {
            arr[s[i] - 'A']--;
        }

        int res = 0;
        for (int &num : arr) {
            if (num <= 0) {
                res++;
            }
        }
        cout << res << endl;
    }
}