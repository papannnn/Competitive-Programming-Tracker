#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2039/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        cout << 2 << " ";
        n--;
        int num = 3;
        while (n--) {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }
}