#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1858/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<bool> arr(1e5 + 1);
        for (int i = 1 ; i <= n; i++) {
            if (arr[i]) {
                continue;
            }
            cout << i << " ";
            arr[i] = true;
            int x = i;
            while (x * 2 <= n && !arr[x * 2]) {
                cout << x * 2 << " ";
                arr[x * 2] = true;
                x *= 2;
            }
        }
        cout << endl;
    }
}