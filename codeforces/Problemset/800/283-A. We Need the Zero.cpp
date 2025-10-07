#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1805/A
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

        int val = arr[0];
        for (int i = 1 ; i < arr.size(); i++) {
            val ^= arr[i];
        }
        
        int res = val;
        val = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            val ^= (arr[i] ^ res);
        }

        cout << (val == 0 ? res : -1) << endl;
    }
}