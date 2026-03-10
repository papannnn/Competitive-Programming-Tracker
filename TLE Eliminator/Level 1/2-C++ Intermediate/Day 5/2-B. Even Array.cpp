#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1367/B
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

        int odd = 0;
        int even = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                if (arr[i] % 2 != 0) {
                    odd++;
                }
            } else {
                if (arr[i] % 2 == 0) {
                    even++;
                }
            }
        }

        if (odd == even) {
            cout << odd << endl;
        } else {
            cout << -1 << endl;
        }
    }
}