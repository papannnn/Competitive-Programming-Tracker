#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1847/B
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

        int minVal = arr[0];
        for (int i = 0 ; i < arr.size(); i++) {
            minVal &= arr[i];
        }

        if (minVal != 0) {
            cout << 1 << endl;
            continue;
        }
        
        int curr = arr[0];
        int res = curr == 0;
        for (int i = 1; i < arr.size(); i++) {
            if (curr == 0) {
                curr = arr[i];
            }
            curr &= arr[i];
            if (curr == 0) {
                res++;
            }
        }
        cout << res << endl;
    }
}