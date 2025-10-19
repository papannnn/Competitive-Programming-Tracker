#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1851/B
// O(t * n log n)
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

        vector<int> arrDup(arr);
        sort(arrDup.begin(), arrDup.end());
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            if (!valid) {
                break;
            }
            valid &= (arr[i] % 2) == (arrDup[i] % 2);
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}