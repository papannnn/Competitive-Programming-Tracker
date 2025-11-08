#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1337/B
// O(t * log(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int h, n, m;
        cin >> h >> n >> m;

        while (n && (h / 2 + 10) < h) {
            h = h / 2 + 10;
            n--;
        }

        cout << (m * 10 >= h ? "YES" : "NO") << endl;
    }
}
