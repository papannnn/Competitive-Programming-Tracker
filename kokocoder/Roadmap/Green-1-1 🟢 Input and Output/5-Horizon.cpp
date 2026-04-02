#include <bits/stdc++.h>

using namespace std;
// O(sqrt(x))
int main () {
    long long x;
    cin >> x;
    double res = sqrt(x * (12800000 + x));
    cout << fixed << setprecision(6) << res << endl;
}