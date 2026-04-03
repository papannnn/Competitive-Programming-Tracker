#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    a *= a;
    b *= b;
    c *= c;
    cout << (a + b < c ? "Yes" : "No") << endl;
}