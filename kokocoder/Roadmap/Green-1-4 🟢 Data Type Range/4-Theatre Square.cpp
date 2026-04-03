#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    long long n, m, a;
    cin >> n >> m >> a;
    long long res = ceil(static_cast<double>(n) / a) * ceil(static_cast<double>(m) / a);
    cout << res << endl;
}