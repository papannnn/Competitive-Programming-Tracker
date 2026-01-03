#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1759/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int maxVal = 0;
        vector<int> flag(51);
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
            flag[num]++;
        }

        int tot = 0;
        for (int i = 1 ; i <= maxVal; i++) {
            if (flag[i] == 0) {
                tot += i;
            }
        }

        if (tot == k) {
            cout << "YES" << endl;
            continue;
        }

        if (tot > k) {
            cout << "NO" << endl;
            continue;
        }

        int x = maxVal + 1;
        while (tot < k) {
            tot += x;
            // cout << x << endl;
            x++;
        }

        cout << (tot == k ? "YES" : "NO") << endl;
    }
}