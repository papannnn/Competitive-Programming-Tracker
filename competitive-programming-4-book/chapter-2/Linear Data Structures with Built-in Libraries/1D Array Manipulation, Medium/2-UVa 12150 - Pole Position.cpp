#include <bits/stdc++.h>

using namespace std;
// https://onlinejudge.org/external/121/12150.pdf
// O(t * n)
int main () {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> pos(n + 1);
        bool valid = true;
        for (int i = 1; i <= n; i++) {
            int car, change;
            cin >> car >> change;
            if (i + change < 1 || i + change > n) {
                valid = false;
                continue;
            }

            if (pos[i + change] != 0) {
                valid = false;
                continue;
            }
            pos[i + change] = car;
        }

        if (!valid) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 1; i <= n; i++) {
            cout << pos[i];
            if (i != n) {
                cout << " ";
            }
        }
        cout << endl;
    }
}