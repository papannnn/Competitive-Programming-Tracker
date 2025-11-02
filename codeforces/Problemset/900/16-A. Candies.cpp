#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1343/A
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int curr = 1;
        int tot = 1;
        while (tot < n) {
            curr *= 2;
            tot += curr;
            if (n % tot == 0) {
                cout << n / tot << endl;
                break;
            }
        }
    }
}