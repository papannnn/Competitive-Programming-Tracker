#include <bits/stdc++.h>

using namespace std;
// O(n ^ 2)
int main () {
    int n;
    cin >> n;
    int res = 0;
    res += ceil(static_cast<double>(n) / 2) * ceil(static_cast<double>(n) / 2);
    res += (n / 2) * (n / 2);
    cout << res << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2) {
                if (j % 2) {
                    cout << 'C';
                } else {
                    cout << '.';
                }
            } else {
                if (j % 2) {
                    cout << '.';
                } else {
                    cout << 'C';
                }
            }
        }
        cout << endl;
    }
}