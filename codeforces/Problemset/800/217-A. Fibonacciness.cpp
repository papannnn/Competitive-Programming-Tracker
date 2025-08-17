#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2060/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(4);
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int n = arr[2] - arr[1];
        int res1 = 0;
        res1 += arr[0] + arr[1] == n;
        res1 += arr[1] + n == arr[2];
        res1 += n + arr[2] == arr[3];

        int n2 = arr[3] - arr[2];
        int res2 = 0;
        res2 += arr[0] + arr[1] == n2;
        res2 += arr[1] + n2 == arr[2];
        res2 += n2 + arr[2] == arr[3];

        cout << max(res1, res2) << endl;
    }
}