#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1862/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &a : arr) {
            cin >> a;
        }

        vector<int> res;
        res.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] > arr[i]) {
                res.push_back(arr[i]);
                res.push_back(arr[i]);
            } else {
                res.push_back(arr[i]);
            }
        }

        cout << res.size() << endl;
        for (int a : res) {
            cout << a << " ";
        }
        cout << endl;
    }
}