#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxVal = -1;
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
        }

        int res = 0;
        for (int &num : arr) {
            res += num == maxVal;
        }
        cout << res << endl;
    }
}