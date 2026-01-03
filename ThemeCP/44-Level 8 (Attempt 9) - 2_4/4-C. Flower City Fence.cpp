#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1862/C
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

        if (arr[0] != arr.size()) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> res(n);
        for (int i = 0 ; i < arr.size(); i++) {
            res[arr[i] - 1]++;
        }

        int len = res.size();
        for (int i = len - 2 ; i >= 0; i--) {
            res[i] += res[i + 1];
        }

        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            valid &= arr[i] == res[i];
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}