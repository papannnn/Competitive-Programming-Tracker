#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2000/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (n.length() <= 2) {
            cout << "NO" << endl;
            continue;
        }
        
        if (n[0] != '1' || n[1] != '0') {
            cout << "NO" << endl;
            continue;
        }

        if (n[2] == '0') {
            cout << "NO" << endl;
            continue;
        }

        if (n[2] == '1' && n.length() == 3) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}