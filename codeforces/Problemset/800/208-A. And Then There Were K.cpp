#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1527/A
// O(t * log(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int curr = 1;
        while (curr < n) {
            curr = curr << 1;
            curr++;
        }
        cout << (curr >> 1) << endl;
    }
}