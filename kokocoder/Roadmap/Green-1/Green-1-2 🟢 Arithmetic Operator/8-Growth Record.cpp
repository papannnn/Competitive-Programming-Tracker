#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    int birth = t - x * d;
    int res = birth + min(x * d, m * d);
    cout << res << endl;
}