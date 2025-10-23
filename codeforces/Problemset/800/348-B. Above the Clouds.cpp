#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2121/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        vector<int> arr(26);
        arr[s[0] - 'a']++;
        arr[s[s.length() - 1] - 'a']++;
        bool found = false;
        for (int i = 1; i < s.length() - 1; i++) {
            if (arr[s[i] - 'a']) {
                found = true;
                break;
            }
            arr[s[i] - 'a']++;
        }
        cout << (found ? "Yes" : "No") << endl;
    }
}