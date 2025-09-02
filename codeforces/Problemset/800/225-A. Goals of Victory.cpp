#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1877/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tot = 0;
        for (int i = 0 ; i < n - 1; i++) {
            int num;
            cin >> num;
            tot += num;
        }
        cout << tot * -1 << endl;
    }
}