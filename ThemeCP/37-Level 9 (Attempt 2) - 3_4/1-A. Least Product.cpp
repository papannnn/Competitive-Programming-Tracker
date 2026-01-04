#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1917/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int negCnt = 0;
        int zeroCnt = 0;
        for (int &num : arr) {
            cin >> num;
            if (num < 0) {
                negCnt++;
            }

            if (num == 0) {
                zeroCnt++;
            }
        }

        if (negCnt % 2 || zeroCnt > 0) {
            cout << 0 << endl;
            continue;
        }

        cout << 1 << endl;
        cout << "1 0" << endl;
    }
}