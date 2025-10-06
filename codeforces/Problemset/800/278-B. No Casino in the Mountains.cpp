#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2126/B
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

        int ptr = 0;
        bool restDay = false;
        int res = 0;
        while (ptr < arr.size()) {
            if (restDay) {
                restDay = false;
                ptr++;
                continue;
            }

            int needToTake = k;
            while (ptr < arr.size() && needToTake) {
                if (arr[ptr] == 1) {
                    ptr++;
                    break;
                }
                
                ptr++;
                needToTake--;
            }

            if (!needToTake) {
                res++;
                restDay = true;
            }
        }
        cout << res << endl;
    }
}