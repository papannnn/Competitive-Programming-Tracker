#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n, m;
    cin >> n >> m;
    int res = 0;
    while (n--) {
        int val;
        cin >> val;
        res += m >= val;
        m -= val;
    }
    cout << res << endl;
}