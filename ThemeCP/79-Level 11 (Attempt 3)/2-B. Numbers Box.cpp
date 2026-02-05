#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1447/B
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        int negCnt = 0;
        int minVal = 1e9;
        int tot = 0;
        for (vector<int>& temp : arr) {
            for (int &num : temp) {
                cin >> num;
                if (num < 0) {
                    negCnt++;
                }
                minVal = min(minVal, abs(num));
                tot += abs(num);
            }
        }

        if (negCnt % 2 == 1) {
            cout << tot - minVal * 2 << endl;
        }  else {
            cout << tot << endl;
        }
    }
}