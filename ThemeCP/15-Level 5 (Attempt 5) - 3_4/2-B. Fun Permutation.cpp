#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2137/B
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

        for (int i = 0 ; i < arr.size(); i++) {
            cout << n + 1 - arr[i] << " ";
        }
        cout << endl;
    }
}
