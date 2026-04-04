#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int a, b;
    cin >> a >> b;
    double res = static_cast<double>(a - b) / a * 100;
    cout << res << endl;
}