#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1771/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int minVal = 1e9;
        int maxVal = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            minVal = min(minVal, arr[i]);
            maxVal = max(maxVal, arr[i]);
        }

        long long minCnt = 0;
        long long maxCnt = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == minVal) {
                minCnt++;
            }

            if (arr[i] == maxVal) {
                maxCnt++;
            }
        }

        if (maxVal != minVal) {
            cout << (minCnt * maxCnt * 2) << endl; 
        } else {
            if (minCnt == 2) {
                cout << 2 << endl;
            } else {
                cout << (minCnt * (minCnt - 1)) << endl;
            }
        }
    }
}