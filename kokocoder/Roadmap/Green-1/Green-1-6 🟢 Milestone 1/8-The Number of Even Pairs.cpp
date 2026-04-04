#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int n, m;
    cin >> n >> m;
    n--;
    m--;
    int res = n * (n + 1) / 2;
    res += m * (m + 1) / 2;
    cout << res << endl;
}