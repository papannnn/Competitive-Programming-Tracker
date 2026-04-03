#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    long long a, b;
    cin >> a >> b;
    long long res = ceil(static_cast<long double>(a) / b);
    cout << res << endl;
}