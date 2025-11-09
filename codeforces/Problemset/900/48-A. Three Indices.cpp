#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1380/A
// O(t * n ^ 2)
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

        bool valid = false;
        for (int i = 1; i < arr.size() - 1; i++) {
            int val = arr[i];
            int ptr1 = i - 1;
            while (ptr1 >= 0 && arr[ptr1] > val) {
                ptr1--;
            }

            if (ptr1 == -1) {
                continue;
            }

            int ptr2 = i + 1;
            while (ptr2 < arr.size() && arr[ptr2] > val) {
                ptr2++;
            }

            if (ptr2 == arr.size()) {
                continue;
            }

            cout << "YES" << endl;
            cout << ptr1 + 1 << " " << i + 1 << " " << ptr2 + 1 << endl;
            valid = true;
            break;
        }

        if (!valid) {
            cout << "NO" << endl;
        }
    }
}