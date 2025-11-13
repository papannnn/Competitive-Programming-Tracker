#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1895/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int chest, key, k;
        cin >> chest >> key >> k;

        if (key < chest) {
            cout << chest << endl;
        } else {
            cout << key + abs(key - min(chest + k, key)) << endl;
        }
    }
}