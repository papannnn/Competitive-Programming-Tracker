#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1772/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(4);
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        bool res = false;
        /*
        0 - 1
        2 - 3
        */
        res |= arr[0] < arr[1] && arr[0] < arr[2] && arr[1] < arr[3] && arr[2] < arr[3];
        /*
        2 - 0
        3 - 1
        */
       res |= arr[2] < arr[0] && arr[2] < arr[3] && arr[0] < arr[1] && arr[3] < arr[1];
        /*
        3 - 2
        1 - 0
        */
        res |= arr[3] < arr[2] && arr[3] < arr[1] && arr[2] < arr[0] && arr[1] < arr[0];
        /*
        1 - 3
        0 - 2
        */
        res |= arr[1] < arr[3] && arr[1] < arr[0] && arr[3] < arr[2] && arr[0] < arr[2];
        cout << (res ? "YES" : "NO") << endl;
    }
}