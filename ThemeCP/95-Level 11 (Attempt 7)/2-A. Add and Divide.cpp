#include <bits/stdc++.h>

using namespace std;
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b > a) {
            cout << 1 << endl;
            continue;
        }

        if (a == b) {
            cout << 2 << endl;
            continue;
        }

        bool one = false;
        if (b == 1) {
            one = true;
            b++;
        }

        long long prev = 
    }
}