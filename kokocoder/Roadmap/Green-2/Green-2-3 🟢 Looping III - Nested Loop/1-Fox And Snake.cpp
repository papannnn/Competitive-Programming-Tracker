#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    bool tail = true;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
            cout << endl;
        } else {
            if (!tail) {
                cout << "#";
            }

            for (int j = 0; j < m - 1; j++) {
                cout << ".";
            }

            if (tail) {
                cout << "#";
            }
            cout << endl;
            tail = !tail;
        }
    }
}