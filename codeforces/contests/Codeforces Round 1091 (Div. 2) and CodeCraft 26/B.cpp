#include <bits/stdc++.h>

using namespace std;
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

        int x;
        cin >> x;

        int minIdx = 1e9;
        int maxIdx = 0;
        bool needSolve = false;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == !arr[x - 1]) {
                needSolve = true;
                minIdx = min(minIdx, i);
                maxIdx = max(maxIdx, i);
            }
        }

        // if (!needSolve) {
        //     cout << 0 << endl;
        //     continue;
        // }

        minIdx = min(minIdx, x - 1);
        maxIdx = max(maxIdx, x - 1);
        
        int res = 0;
        int l = minIdx;
        int r = maxIdx;

        bool flip = false;
        int val = arr[x - 1];
        // cout << minIdx << " " << maxIdx << endl;
        while (l < x - 1 || r > x - 1) {
            bool flag = false;
            while (l < x - 1) {
                if (flip) {
                    if (arr[l] == !val) {
                        l++;
                    } else {
                        flag = true;
                        break;
                    }
                } else {
                    if (arr[l] == val) {
                        l++;
                    } else {
                        flag = true;
                        break;
                    }
                }
            }

            while (r > x - 1) {
                if (flip) {
                    if (arr[r] == !val) {
                        r--;
                    } else {
                        flag = true;
                        break;
                    }
                } else {
                    if (arr[r] == val) {
                        r--;
                    } else {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag) {
                flip = !flip;
                res++;
            }
        }
        cout << res + flip << endl;
    }
}