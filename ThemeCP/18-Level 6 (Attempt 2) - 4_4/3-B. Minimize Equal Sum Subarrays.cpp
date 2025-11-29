#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1998/B
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

        cout << arr[arr.size() - 1] << " ";
        for (int i = 0 ; i < arr.size() - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
