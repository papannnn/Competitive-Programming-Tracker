#include <bits/stdc++.h>

using namespace std;
// O(n ^ 2)
int main () {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                cout << m << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}