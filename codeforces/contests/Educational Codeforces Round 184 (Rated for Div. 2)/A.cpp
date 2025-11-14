#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2169/problem/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        long long tot = 0;
        for (long long &num : arr) {
            cin >> num;
            tot += num;
        }

        int cnt = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] <= k) {
                cnt++;
            } else {
                break;
            }
        }

        int cnt1 = 0;
        int cnt2 = 0;
        int val1 = k - 1;
        int val2 = k + 1;
        for (int i = 0 ; i < arr.size() && arr[i] < k; i++) {
            if (arr[i] <= val1) {
                cnt1++;
            }
        }

        for (int i = arr.size() - 1; i >= 0 && arr[i] > k; i--) {
            if (arr[i] >= val2) {
                cnt2++;
            }
        }

        if (cnt1 > cnt2) {
            cout << val1 << endl;
        } else {
            cout << val2 << endl;
        }
    }
}