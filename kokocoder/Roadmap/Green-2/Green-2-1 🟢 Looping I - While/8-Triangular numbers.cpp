#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    int n;
    cin >> n;
    bool valid = false;
    int x = 0;
    int incr = 1;
    while (x <= n) {
        x += incr++;
        valid |= x == n;
    }
    cout << (valid ? "YES" : "NO") << endl;
}