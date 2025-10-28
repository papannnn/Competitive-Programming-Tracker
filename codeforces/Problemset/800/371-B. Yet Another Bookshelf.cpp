#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1433/B
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

        int res = 0;
        int ptr = 0;
        while (ptr < arr.size()) {
            if (arr[ptr] == 1) {
                ptr++;
                int gap = 0;
                while (ptr < arr.size() && arr[ptr] != 1) {
                    gap++;
                    ptr++;
                }

                if (arr[ptr] == 1) {
                    res += gap;
                }
            } else {
                ptr++;
            }
        }
        cout << res << endl;
    }
}