#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1362/A
// O(t * log a)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        bool valid = true;
        int res = 0;
        while (a < b) {
            if (a * 8 <= b) {
                a *= 8;
                res++;
                continue;
            }

            if (a * 4 <= b) {
                a *= 4;
                res++;
                continue;
            }

            if (a * 2 <= b) {
                a *= 2;
                res++;
                continue;
            }
            
            break;
        }

        while (a > b) {
            if (a % 8 == 0 && a / 8 >= b) {
                a /= 8;
                res++;
                continue;
            }

            if (a % 4 == 0 && a / 4 >= b) {
                a /= 4;
                res++;
                continue;
            }

            if (a % 2 == 0 && a / 2 >= b) {
                a /= 2;
                res++;
                continue;
            }
            
            break;
        }

        if (a != b) {
            cout << -1 << endl;
        } else {
            cout << res << endl;
        }
    }
}