#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1882/A
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

        int val = 1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (val == arr[i]) {
                val++;
            }

            if (i < arr.size() - 1)
                val++;
        }
        cout << val << endl;
    }
}