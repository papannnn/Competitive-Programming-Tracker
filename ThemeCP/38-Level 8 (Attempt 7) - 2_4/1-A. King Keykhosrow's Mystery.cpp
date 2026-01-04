#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2034/A
// O(t * log min(a, b))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }
}