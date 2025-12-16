#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1841/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "Alice" << endl;
        } else if (n == 2) {
            cout << "Bob" << endl;
        } else if (n == 3) {
            cout << "Bob" << endl;
        } else if (n == 4) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
}
