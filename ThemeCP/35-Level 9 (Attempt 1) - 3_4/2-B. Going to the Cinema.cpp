#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1781/B
// O(t * n log n)
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

        sort(arr.begin(), arr.end());

        int ptr = 0;
        int cnt = 0;
        int res = 0;
        bool flag = false;
        while (ptr < n) {
            if (arr[ptr] > cnt) {
                res++;
                flag = true;
                while (ptr < n && arr[ptr] > cnt) {
                    cnt++;
                    ptr++;
                }
            }
            ptr++;
            cnt++;
        }
        if (!flag) {
            cout << 1 << endl;
        } else {
            cout << res + 1<< endl;
        }
    }
}