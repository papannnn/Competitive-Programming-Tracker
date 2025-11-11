#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2111/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // if (n == 1) {
        //     cout << 3 << endl;
        //     continue;
        // }
        
        int cnt = 0;
        while (n != 0) {
            n /= 2;
            cnt++;
        }
        cnt++;
        cout << cnt + cnt - 1 << endl;
    }
}

// [0 0 0]
// [1 1 2]
// [3 5 2]
// 14 7 3 1 0
// 5 2 1 0
// 2025 1012 506 253 126 63 31 15 7 3 1 0