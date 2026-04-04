#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n, p, q;
    cin >> n >> p >> q;
    int res = p;
    while (n--) {
        int val;
        cin >> val;
        res = min(res, q + val);
    }
    cout << res << endl;
}