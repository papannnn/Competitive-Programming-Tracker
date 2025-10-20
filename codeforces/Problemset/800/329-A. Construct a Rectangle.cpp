#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1622/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int biggest = max(a, max(b, c));
        int mid = min(min(max(a, b), max(b, c)), max(a, c));
        int lowest = min(a, min(b, c));

        if (lowest + mid == biggest) {
            cout << "YES" << endl;
            continue;
        }

        if (lowest == mid) {
            if (biggest % 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            continue;
        }

        if (biggest == mid) {
            if (lowest % 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            continue;
        }

        cout << "NO" << endl;
    }
}