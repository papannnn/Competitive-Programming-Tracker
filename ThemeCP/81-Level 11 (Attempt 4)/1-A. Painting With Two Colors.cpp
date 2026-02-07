#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2134/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (b >= a) {
            cout << (b % 2 == n % 2 ? "YES" : "NO") << endl;
            continue;
        }

        cout << (b % 2 == n % 2 && a % 2 == n % 2 ? "YES" : "NO") << endl; 
    }
}