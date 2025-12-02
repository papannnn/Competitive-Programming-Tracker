#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2109/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int zero = 0;
        int one = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 0) {
                zero++;
            } else {
                one++;
            }
        }

        bool valid = false;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            if (arr[i] == 0 && arr[i + 1] == 0) {
                valid = true;
            }
        }

        if (valid || one == 0 || one == arr.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}