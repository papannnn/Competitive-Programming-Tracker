#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1855/A
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

        int diff = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] - 1 == i) {
                diff++;
            }
        }

        int res = ceil((double) diff / 2);
        cout << res << endl;
    }
}