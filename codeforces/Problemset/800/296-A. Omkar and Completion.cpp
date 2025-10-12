#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1372/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int curr = 1;
        while (n--) {
            cout << curr << " ";
        }
        cout << endl;
    }
}