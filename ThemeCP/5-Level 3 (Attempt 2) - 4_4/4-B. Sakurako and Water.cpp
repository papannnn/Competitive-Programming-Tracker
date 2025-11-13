#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2033/B
// O(t * n * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;

        for (int i = 0 ; i < n; i++) {
            vector<int> temp;
            for (int j = 0 ; j < n; j++) {
                int num;
                cin >> num;
                temp.push_back(num);
            }
            arr.push_back(temp);
        }

        int res = 0;
        for (int i = 0 ; i < n; i++) {
            int j = 0;
            int k = n - 1 - i;
            int minVal = 0;
            while (j < n && k < n) {
                // cout << arr[j][k] << " ";
                if (arr[j][k] < 0) {
                    minVal = min(minVal, arr[j][k]);
                }
                j++;
                k++;
            }
            // cout << endl;
            res += abs(minVal);
        }

        for (int i = 1; i < n ; i++) {
            int j = i;
            int k = 0;
            int minVal = 0;
            while (j < n && k < n) {
                // cout << arr[j][k] << " ";
                if (arr[j][k] < 0) {
                    minVal = min(minVal, arr[j][k]);
                }
                j++;
                k++;
            }
            // cout << endl;
            res += abs(minVal);
        }
        
        cout << res << endl;
    }
}