#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2121/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = min(abs(s - arr[0]) + abs(arr[0] - arr[arr.size() - 1]), abs(s - arr[arr.size() - 1]) + abs(arr[0] - arr[arr.size() - 1]));
        cout << res << endl;
    }
}