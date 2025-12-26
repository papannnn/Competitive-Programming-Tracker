#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2153/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int x = a | b;
        int y = b | c;
        int z = a | c;

        bool valid = true;
        valid &= (x & y) == b;
        valid &= (y & z) == c;
        valid &= (x & z) == a;
        cout << (valid ? "YES" : "NO") << endl;
    }
}