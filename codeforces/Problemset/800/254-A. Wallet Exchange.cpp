#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1919/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << ((n + m) % 2 ? "Alice" : "Bob") << endl;
    }
}