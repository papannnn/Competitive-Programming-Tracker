#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1537/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tot = 0;
        for (int i = 0 ; i < n; i++) {
            int val;
            cin >> val;
            tot += val;
        }
        
        if (tot >= n) {
            cout << abs(tot - n) << endl;
        } else {
            cout << 1 << endl;
        }
    }
}