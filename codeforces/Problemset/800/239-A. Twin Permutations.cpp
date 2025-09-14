#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1831/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            cout << n - num + 1 << " ";
        }
        cout << endl;
    }
}