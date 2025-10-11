#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1421/A
// O(t)
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (a ^ a) + (a ^ b) << endl;
    }
}