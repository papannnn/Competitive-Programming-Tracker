#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1925/A
// O(t * n * k)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < k; j++) {
                char c = j + 'a';
                cout << c;
            }
        }
        cout << endl;
    }
}