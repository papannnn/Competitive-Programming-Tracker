#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
// O(1)
int main () {
    long long a, b;
    cin >> a >> b;
    int res = (a % 10) + (b % 10);
    cout << res << endl;
}