#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1891/B
// O(t * n)

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int minK = 32;
        while (k--) {
            int q;
            cin >> q;
            if (q >= minK) {
                continue;
            }

            minK = q;
            int val = pow(2, q);
            int add = pow(2, q - 1);
            for (int &num : arr) {
                if (num % val == 0) {
                    num += add;
                }
            }
        }
        
        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}