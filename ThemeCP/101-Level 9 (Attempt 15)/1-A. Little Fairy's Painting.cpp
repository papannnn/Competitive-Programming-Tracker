#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2175/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> flag;
        for (int i = 0 ; i < n; i++) {
            int n;
            cin >> n;
            flag.insert(n);
        }

        for (auto &num : flag) {
            if (num >= flag.size()) {
                cout << num << endl;
                break;
            }
        }
    }
}