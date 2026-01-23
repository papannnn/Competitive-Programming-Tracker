#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1951/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        
        vector<int> pos;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                pos.push_back(i);
            }
        }

        if (pos.size() % 2) {
            cout << "NO" << endl;
            continue;
        }

        if (pos.size() == 2) {
            if (pos.back() - pos[0] == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            continue;
        }

        cout << "YES" << endl;
    }
}