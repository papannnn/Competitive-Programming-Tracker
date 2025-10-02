#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1777/A
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
        int currNum = arr[0];
        int res = 0;
        for (int i = 1; i < arr.size(); i++) {
            if ((currNum % 2) == (arr[i] % 2)) {
                res++;
            } else {
                currNum = arr[i];
            }
        }
        cout << res << endl;
    }
}