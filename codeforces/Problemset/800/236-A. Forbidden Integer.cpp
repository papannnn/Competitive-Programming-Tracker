#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1845/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            while (n--) {
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }

        if (k == 2) {
            if (n % 2) {
                cout << "NO";
            } else {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                while (n) {
                    cout << 2 << " ";
                    n -= 2;
                }
            }
            cout << endl;
            continue;
        }

        if (k >= 3) {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2) {
                cout << 3 << " ";
                n -= 3;   
            }
            while (n) {
                cout << 2 << " ";
                n -= 2;
            }
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}