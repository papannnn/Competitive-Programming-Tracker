#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
// O(1)
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c}) << " " << max({a, b , c}) << endl;
}