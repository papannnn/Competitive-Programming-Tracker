#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1744/B
// O(t * n * q)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        long long sumEven = 0;
        long long sumOdd = 0;
        long long cntEven = 0;
        long long cntOdd = 0;
        for (int &num : arr) {
            cin >> num;
            if (num % 2) {
                sumOdd += num;
                cntOdd++;
            } else {
                sumEven += num;
                cntEven++;
            }
        }

        for (int i = 0 ; i < q; i++) {
            int isOdd;
            long long val;
            cin >> isOdd >> val;

            if (isOdd) {
                sumOdd += cntOdd * val;
                if (val % 2) {
                    sumEven += sumOdd;
                    sumOdd = 0;
                    cntEven += cntOdd;
                    cntOdd = 0;
                }
            } else {
                sumEven += cntEven * val;
                if (val % 2) {
                    sumOdd += sumEven;
                    sumEven = 0;
                    cntOdd += cntEven;
                    cntEven = 0;
                }
            }
            cout << sumOdd + sumEven << endl;
        }
        // cout << sumEven + sumOdd << endl;
    }
}
// 4 4 6