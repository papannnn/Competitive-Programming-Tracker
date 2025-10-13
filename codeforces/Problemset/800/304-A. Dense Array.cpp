#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1490/A
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

        int res = 0;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            int minVal = min(arr[i], arr[i + 1]);
            int maxVal = max(arr[i], arr[i + 1]);
            while (minVal * 2 < maxVal) {
                minVal *= 2;
                res++;
            }
        }
        
        cout << res << endl;
    }
}