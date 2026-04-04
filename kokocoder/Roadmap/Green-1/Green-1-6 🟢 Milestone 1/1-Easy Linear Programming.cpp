#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    long long a, b, c, k;
    cin >> a >> b >> c >> k;
    long long res = 0;

    if (k > 0) {
        res += min(a, k);
        k -= min(k, a);
    }

    if (k > 0) {
        k -= min(k, b);
    }

    if (k > 0) {
        res -= min(c, k);
    }
    cout << res << endl;
}