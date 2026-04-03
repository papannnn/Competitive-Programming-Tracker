#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int n, t, a;
    cin >> n >> t >> a;
    n -= t;
    n -= a;
    if (n + t < a || t > a + n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}