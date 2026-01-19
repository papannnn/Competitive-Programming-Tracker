#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1634/C
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int prod = n * k;
        int even = 0;
        int odd = 0;
        for (int i = 1; i <= prod; i++) {
            if (i % 2) {
                odd++;
            } else {
                even++;
            }
        }


        if (odd % k) {
            cout << "NO" << endl;
            continue;
        }

        int nextEven = 2;
        int nextOdd = 1;
        cout << "YES" << endl;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < k; j++) {
                if (odd){
                    odd--;
                    cout << nextOdd << " ";
                    nextOdd += 2;
                } else {
                    cout << nextEven << " ";
                    nextEven += 2;
                }
            }
            cout << endl;
        }
    }
}