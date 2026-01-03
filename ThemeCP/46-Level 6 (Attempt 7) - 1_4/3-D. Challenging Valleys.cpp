#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1760/D
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

        int cnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i == 0 || arr[i] < arr[i - 1]) {
                int ptr = i;
                while (ptr < arr.size()) {
                    if (arr[ptr] == arr[i]) {
                        ptr++;
                    } else {
                        break;
                    }
                }
                if (ptr == arr.size()) {
                    cnt++;
                } else if (arr[ptr] > arr[i]) {
                    cnt++;
                }
                continue;
            }

            if (i == arr.size() - 1) {
                if (arr[i] < arr[i - 1]) {
                    cnt++;
                }
            }
        }
        // cout << cnt << endl;
        cout << (cnt == 1 ? "YES" : "NO") << endl;
    }
}