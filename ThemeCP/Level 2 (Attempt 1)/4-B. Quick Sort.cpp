#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1768/B
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

        int expected = 1;
        int diff = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != expected) {
                diff++;
            } else {
                expected++;
            }
        }

        int res = ceil((double) diff / k);
        cout << res << endl;
    }
}
