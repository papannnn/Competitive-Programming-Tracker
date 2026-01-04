#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2106/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int &num : arr1) {
            cin >> num;
        }
        
        for (int &num : arr2) {
            cin >> num;
        }
        
        bool flag = false;
        int combine = -1;
        bool valid = true;
        int maxVal = 0;
        for (int i = 0 ; i < n; i++) {
            maxVal = max(arr1[i], maxVal);
            if (!flag && arr2[i] != -1) {
                flag = true;
                combine = arr1[i] + arr2[i];
            }

            if (flag && arr2[i] != -1) {
                if (arr1[i] + arr2[i] != combine) {
                    valid = false;
                    break;
                }
            }

            if (flag && arr2[i] == -1) {
                if (arr1[i] > combine) {
                    valid = false;
                    break;
                }

                if (combine - arr1[i] > k) {
                    valid = false;
                    break;
                }
            }
        }

        for (int i = 0 ; i < n; i++) {
            if (flag && arr2[i] == -1) {
                if (arr1[i] > combine) {
                    valid = false;
                    break;
                }

                if (combine - arr1[i] > k) {
                    valid = false;
                    break;
                }
            }
        }

        if (!valid) {
            cout << 0 << endl;
            continue;
        }

        if (flag) {
            cout << 1 << endl;
            continue;
        }

        int res = 0;
        for (int i = 0 ; i < n; i++) {
            res = max(res, maxVal - arr1[i]);
        }
        cout << k - res + 1 << endl;
    }
}