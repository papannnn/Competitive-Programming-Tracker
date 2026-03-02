#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2205/problem/A
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

        int idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == n) {
                idx = i;
            }
        }

        swap(arr[0], arr[idx]);
        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}
