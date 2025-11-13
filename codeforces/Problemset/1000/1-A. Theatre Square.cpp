#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1/A
// O(1)
int main () {
    long long n, m, a;
    cin >> n >> m >> a;
    long long res = ceil((double) n / a) * ceil((double) m / a);
    cout << res << endl;
}