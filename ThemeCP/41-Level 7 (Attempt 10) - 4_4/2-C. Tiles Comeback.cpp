#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1851/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        bool valid = true;
        int idx = -1;
        int cntReverse = k;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == arr[arr.size() - 1]) {
                cntReverse--;
                idx = i;
                if (cntReverse == 0) {
                    break;
                }
            }
        }

        if (cntReverse) {
            valid = false;
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        if (arr[0] == arr[arr.size() - 1]) {
            cout << "YES" << endl;
            continue;
        }

        int cntForward = k;
        for (int i = 0; i < idx; i++) {
            if (arr[i] == arr[0]) {
                cntForward--;
                if (cntForward == 0) {
                    break;
                }
            }
        }

        if (cntForward) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}