#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2004/A
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
        if (n != 2) {
            cout << "NO" << endl;
            continue;
        }

        if (abs(arr[0] - arr[1]) <= 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}