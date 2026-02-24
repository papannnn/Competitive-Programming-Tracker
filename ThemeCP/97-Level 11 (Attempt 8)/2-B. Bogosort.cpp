#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1312/B
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

        sort(arr.begin(), arr.end(), greater<int>());
        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}