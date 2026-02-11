#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;
        if (p == q) {
            cout << "Alice" << endl;
            continue;
        }
        double res = static_cast<double>(p) / q;
        double limit = static_cast<double>(2) / 3;
    
        cout << (res >= limit ? "Bob" : "Alice") << endl;
    }
}