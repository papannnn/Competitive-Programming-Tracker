#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1843/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long tot = 0;
        for (int &num : arr) {
            cin >> num;
            tot += abs(num);
        }

        int ptr = 0;
        int res = 0;
        while (ptr < arr.size()) {
            if (arr[ptr] < 0) {
                res++;
                ptr++;
                while (ptr < arr.size() && arr[ptr] <= 0) {
                    ptr++;
                }
                continue;
            }
            ptr++;
        }
        cout << tot << " " << res << endl;
    }
}