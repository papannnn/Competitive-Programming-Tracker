#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1633/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 7 == 0) {
            cout << n << endl;
            continue;
        }

        int remain = n % 7;
        int lastDigit = n % 10;
        if (remain <= lastDigit) {
            n -= remain;
        } else {
            n += 7 - remain;
        }
        cout << n << endl;
    }
}