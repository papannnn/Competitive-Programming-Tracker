#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1948/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        char c = 'A';
        for (int i = 0; i < n / 2; i++) {
            cout << c << c;
            if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
        cout << endl;
    }
}