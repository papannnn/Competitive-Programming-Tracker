#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1744/problem/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, char> mapping;
        for (int &num : arr) {
            cin >> num;
        }

        string s;
        cin >> s;
        bool valid = true;
        for (int i = 0 ; i < s.length(); i++) {
            if (mapping.find(arr[i]) == mapping.end()) {
                mapping[arr[i]] = s[i];
                continue;
            }
            valid &= mapping[arr[i]] == s[i];
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}