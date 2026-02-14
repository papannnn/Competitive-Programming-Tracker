#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2064/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        int ptr = 0;
        int len = 0;
        int resL = -1;
        int resR = -1;
        while (ptr < arr.size()) {
            if (mapping[arr[ptr]] != 1) {
                ptr++;
                continue;
            }

            int l = ptr;
            int r = ptr;
            ptr++;
            while (ptr < arr.size() && mapping[arr[ptr]] == 1) {
                r = ptr;
                ptr++;
            }
            if (len < r - l + 1) {
                len = r - l + 1;
                resL = l + 1;
                resR = r + 1;
            }
        }
        if (resL == -1) {
            cout << 0 << endl;
        } else {
            cout << resL << " " << resR << endl;
        }
    }
}