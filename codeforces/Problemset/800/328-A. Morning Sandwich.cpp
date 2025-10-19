#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1849/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int bread, cheese, ham;
        cin >> bread >> cheese >> ham;
        int filling = cheese + ham;
        if (bread < 2 || filling == 0) {
            cout << 0 << endl;
            break;
        }

        if (filling < bread) {
            cout << filling + filling + 1 << endl;
        } else {
            cout << bread + bread - 1 << endl;
        }
    }
}