#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1979/A
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
        
        int minVal = 1e9;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            minVal = min(minVal, max(arr[i], arr[i + 1]));
        }
        cout << minVal - 1 << endl;
    }
}