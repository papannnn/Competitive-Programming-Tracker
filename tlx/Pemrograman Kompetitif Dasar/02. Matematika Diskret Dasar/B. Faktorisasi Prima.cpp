#include <bits/stdc++.h>

using namespace std;
// O(sqrt(n))
int main () {
    long long n;
    cin >> n;
    bool first = true;
    for (int i = 2; i * i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }

        if (!cnt) {
            continue;
        }

        if (!first) {
            cout << " x ";
        }
        first = false;

        cout << i;
        if (cnt > 1) {
            cout << "^" << cnt;
        }
    }

    if (n > 1) {
        if (!first) {
            cout << " x ";
        }
        cout << n;
    }
}