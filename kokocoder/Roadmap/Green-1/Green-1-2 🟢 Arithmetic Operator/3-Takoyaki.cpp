#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int n, x, t;
    cin >> n >> x >> t;
    int amt = ceil(static_cast<double>(n) / x);
    cout << amt * t << endl;
}