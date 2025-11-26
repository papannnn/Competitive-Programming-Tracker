#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2149/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> flag(n + 2);
        for (int &num : arr) {
            cin >> num;
            flag[num]++;
        }

        int res = 0;
        for (int i = 0; i < k; i++) {
            if (flag[i] == 0) {
                res++;
            }
        }

        if (flag[k] - res > 0) {
            res += flag[k] - res;
        }
        cout << res << endl;
    }
}