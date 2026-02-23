#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1594/C
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        vector<char> arr(n + 1);
        bool valid = true;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            valid &= arr[i] == c;
        }

        bool res = false;
        int resVal = -1;
        for (int i = 1; i <= n; i++) {
            bool flag = arr[i] == c;
            if (!flag) {
                continue;
            }
            
            for (int j = i; j <= n; j += i) {
                flag &= arr[j] == c;
            }
            if (flag) {
                res = true;
                resVal = i;
            }
        }

        if (valid) {
            cout << 0 << endl;
        } else if (res) {
            cout << 1 << endl;
            cout << resVal << endl;
        } else {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }
}