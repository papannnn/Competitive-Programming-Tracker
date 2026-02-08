#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2128/problem/B
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

        string res = "";
        int l = 0;
        int r = n - 1;
        for (int i = 0 ; i < n; i++) {
            bool goLeft = false;
            if (i % 2 == 0) {
                goLeft = arr[l] > arr[r];
            } else {
                goLeft = arr[l] < arr[r];
            }

            if (goLeft) {
                res += 'L';
                l++;
            } else {
                res += 'R';
                r--;
            }
        }
        cout << res << endl;
    }
}