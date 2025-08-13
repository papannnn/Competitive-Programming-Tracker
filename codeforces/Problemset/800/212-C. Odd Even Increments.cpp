#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1669/C
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

        int evenIdx = arr[0] % 2;
        int oddIdx = arr[1] % 2;
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            if (i % 2) {
                if (arr[i] % 2 != oddIdx) {
                    valid = false;
                }
            } else {
                if (arr[i] % 2 != evenIdx) {
                    valid = false;
                }
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}