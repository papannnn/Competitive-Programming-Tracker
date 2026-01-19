#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1632/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int logVal = log2(n - 1);
        int powVal = pow(2, logVal);
        for (int i = 1; i <= n - 1; i++) {
            if (i == powVal) {
                cout << 0 << " " << i << " ";
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
}