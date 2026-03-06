#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/4/A
// O(1)
int main () {
    int n;
    cin >> n;
    if (n % 2 == 0 && n != 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}