#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/451/A
// O(1)
int main () {
    int n, m;
    cin >> n >> m;
    if (min(n, m) % 2) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }
}