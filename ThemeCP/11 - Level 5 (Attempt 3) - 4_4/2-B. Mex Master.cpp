#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1806/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int zero = 0;
        int one = 0;
        int nonZero = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 0) {
                zero++;
            } else if (num == 1) {
                one++;
            } else {
                nonZero++;
            }
        }

        if (nonZero + one + 1 >= zero) {
            cout << 0 << endl;
        } else if (one > 0 && nonZero == 0) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}
// 0 1 0 2 0 3 0 0