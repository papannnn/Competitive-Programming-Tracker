#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1538/A
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

        // Full Left traverse
        int cnt = 0;
        int idx = 0;
        int left = 0;
        while (cnt < 2) {
            if (arr[idx] == 1 || arr[idx] == n) {
                cnt++;
            }
            idx++;
            left++;
        }

        // Full Right Traverse
        cnt = 0;
        idx = n - 1;
        int right = 0;
        while (cnt < 2) {
            if (arr[idx] == 1 || arr[idx] == n) {
                cnt++;
            }
            idx--;
            right++;
        }

        // Left once, Right one
        cnt = 0;
        int idxL = 0;
        int idxR = n - 1;
        int leftRight = 0;
        while (cnt < 1) {
            if (arr[idxL] == 1 || arr[idxL] == n) {
                cnt++;
            }
            idxL++;
            leftRight++;
        }

        while (cnt < 2) {
            if (arr[idxR] == 1 || arr[idxR] == n) {
                cnt++;
            }
            idxR--;
            leftRight++;
        }

        cout << min(right, min(left, leftRight)) << endl;
    }
}