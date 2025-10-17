#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1698/A
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

        int res = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            int val = arr[i];
            int curr = 0; 
            for (int j = 0 ; j < arr.size(); j++) {
                if (j == i) {
                    continue;
                }
                curr ^= arr[j];
            }
            if (curr == val) {
                res = curr;
                break;
            }
        }
        cout << res << endl;
    }
}