#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2001/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxCnt = 0;
        vector<int> numMapping(101);
        for (int &num : arr) {
            cin >> num;
            numMapping[num]++;
            maxCnt = max(maxCnt, numMapping[num]);
        }

        cout << arr.size() - maxCnt << endl;
    }
}