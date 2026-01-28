#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1036/problem/A
// O(1)
int main () {
    long long n, k;
    cin >> n >> k;
    long long res = ceil((long double) k / n);
    cout << res << endl;
}