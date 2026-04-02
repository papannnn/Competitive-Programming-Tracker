#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int n, a;
    cin >> n >> a;
    n *= n;
    n -= a;
    cout << n << endl;
}