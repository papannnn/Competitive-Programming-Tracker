#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2027/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxH = 0;
        int maxW = 0;
        for (int i = 0 ; i < n; i++) {
            int w, h;
            cin >> w >> h;
            maxW = max(maxW, w);
            maxH = max(maxH, h);
        }

        cout << (maxW * 2 + maxH * 2) << endl;  
    }
}