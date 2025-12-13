#include <bits/stdc++.h>

using namespace std;
// O(t * log (x ^ y))
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long c = x ^ y;
        
        long long a = 1;
        while (true) {
            if ((a & c) > 0) {
                break;
            }
            a = a << 1;
        }
        cout << a << endl;
    }
}