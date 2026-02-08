#include <bits/stdc++.h>
 
using namespace std;
// https://codeforces.com/problemset/problem/1411/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
 
        if (x < 10) {
            cout << x << endl;
            continue;
        }
 
        long long minVal = 1e18;
        while (true) {
            string s = to_string(x);
            bool used[10] = {};
 
            for (char c : s) {
                int d = c - '0';
                if (d != 0) used[d] = true;
            }
 
            bool valid = true;
            for (int d = 1; d <= 9; d++) {
                if (used[d] && x % d != 0) {
                    valid = false;
                    break;
                }
            }
 
            if (valid) {
                cout << x << '\n';
                break;
            }
            x++;
        }
    }
}