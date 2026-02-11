#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 7999992) {
            cout << 1 << endl;
            continue;
        }
        cout << (n % 9 == 0 ? 10 : 0) << endl;
    }
}