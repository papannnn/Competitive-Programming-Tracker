#include <bits/stdc++.h>

using namespace std;
// O(t * sqrt(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int cnt = 0;
        for (long long i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
        }

        if (n > 1) {
            cnt++;
        }

        if (cnt <= 2) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
}