#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1709/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];

        int cnt = 3;
        int val = x - 1;
        while (val != -1 && cnt != 0) {
            val = arr[val];
            val--;
            cnt--;
        }

        cout << (cnt == 0 ? "YES" : "NO") << endl;
    }
}