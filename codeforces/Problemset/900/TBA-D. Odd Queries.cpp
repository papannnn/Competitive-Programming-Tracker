#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1807/problem/D
// O(t * (n + q))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        int odd = 0;
        for (int &num : arr) {
            cin >> num;
            if (num % 2) {
                odd++;
            }
        }

        vector<int> oddArr(n);
        int oddCnt = 0;
        for (int i = 0 ; i < n; i++) {
            if (arr[i] % 2) {
                oddCnt++;
            }
            oddArr[i] = oddCnt;
        }

        int even = n - odd;
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int totOdd = oddArr[r - 1] - (oddArr[l - 1]) + (arr[l - 1] % 2 == 1);
            int totEven = r - l + 1 - totOdd;
            string res = "";
            if (k % 2) {
                res = (odd + totEven) % 2 == 1 ? "YES" : "NO";
            } else {
                res = (odd - totOdd) % 2 == 1 ? "YES" : "NO";
            }
            cout << res << endl;
        }
    }
}