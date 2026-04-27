#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool sameAB = a == b;
        long long res1 = 1;
        long long res2 = 1;
        long long res3 = 1;
        a--;
        b--;
        c--;
        while (a--) {
            res1 *= 10;
        }

        while (b--) {
            res2 *= 10;
        }

        for (int i = 0; i < c; i++) {
            res3 *= 10;
        }

        res1 += res3;
        cout << res1 << " " << res2 << endl;
    }
}