#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        bool valid = false;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                valid |= arr[i] + arr[j] >= 10;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}