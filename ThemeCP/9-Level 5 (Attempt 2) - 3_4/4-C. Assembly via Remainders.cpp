#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1968/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int &num : arr) {
            cin >> num;
        }

        int curr = 1e4;
        cout << curr << " ";
        for (int i = 0 ; i < arr.size(); i++) {
            cout << curr + arr[i] << " ";
            curr += arr[i];
        }
        cout << endl;
    }
}