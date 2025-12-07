#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2162/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;

        vector<int> res;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '0') {
                res.push_back(i + 1);
            }
        }
        cout << res.size() << endl;
        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}