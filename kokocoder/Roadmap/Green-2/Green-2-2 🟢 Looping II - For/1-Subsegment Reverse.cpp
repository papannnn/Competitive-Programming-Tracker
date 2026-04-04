#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n, l, r;
    cin >> n >> l >> r;
    for (int i = 1; i < l; i++) {
        cout << i << " ";
    }

    for (int i = r; i >= l; i--) {
        cout << i << " ";
    }

    for (int i = r + 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}