#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1840/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        k--;
        long long curr = 0;
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] <= q) {
                curr++;
            } else {
                if (curr >= k + 1) {
                    curr -= k;
                    res += curr * (curr + 1) / 2;
                }
                curr = 0;
            }
        }
        if (curr >= k + 1) {
            curr -= k;
            res += curr * (curr + 1) / 2;
        }
        cout << res << endl;
    }
}