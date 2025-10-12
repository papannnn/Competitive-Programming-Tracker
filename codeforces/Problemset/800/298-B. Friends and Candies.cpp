#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1538/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int tot = 0;
        for (int &num : arr) {
            cin >> num;
            tot += num;
        }

        if (tot % arr.size() != 0) {
            cout << -1 << endl;
            continue;
        }

        int res = 0;
        int avg = tot / arr.size();
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] > avg) {
                res++;
            }
        }
        cout << res << endl;
    }
}