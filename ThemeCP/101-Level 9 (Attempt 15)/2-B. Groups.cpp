#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1598/B
// O(t * n * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<bool>> arr;
        vector<int> cntArr(5);
        for (int i = 0 ; i < n; i++) {
            vector<bool> temp;
            int cnt = 0;
            for (int j = 0 ; j < 5; j++) {
                bool b;
                cin >> b;
                temp.push_back(b);
                cnt += b;
                cntArr[j] += b;
            }
            arr.push_back(temp);
        }

        // for (int &num : cntArr) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (vector<bool> &a : arr) {
        //     for (int i = 0 ; i < a.size(); i++) {
        //         cout << a[i] << " ";
        //     }
        //     cout << endl;
        // }

        int res = 0;
        for (int i = 0 ; i < 5; i++) {
            if (cntArr[i] * 2 < n) {
                continue;
            }

            
            for (int j = i + 1; j < 5; j++) {
                if (cntArr[j] * 2 < n) {
                    continue;
                }
                // cout << "I: " << i << " J: " << j << endl;
                bool flag = true;
                for (int k = 0; k < n; k++) {
                    // cout << (arr[k][j] | arr[k][i]) << " ";
                    flag &= (arr[k][j] | arr[k][i]);
                }
                // cout << flag << endl;
                // cout << endl;
                // for (int k = 0; k < n; k++) {
                //     cout << (arr[k][i]) << " ";
                //     flag &= arr[k][i] || arr[k][i];
                // }
                // cout << endl;
                res += flag;
            }
        }
        // cout << res << endl;
        cout << (res >= 1 ? "YES" : "NO") << endl;
    }
}